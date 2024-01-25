subdir('effects')
subdir('moves')
subdir('subscripts')

s_to_bin_gen = generator(make_script_bin_sh,
    arguments: [
        '--mwrap',
        '-i', meson.project_source_root() / 'include',
        '-i', meson.project_source_root() / 'asm',
        '-i', meson.project_build_root() / 'res' / 'text',
        '-i', meson.project_build_root(),
        '--assembler', mwrap_exe.full_path(),
        '--objcopy', arm_none_eabi_objcopy_exe.full_path(),
        '@EXTRA_ARGS@',
        '@INPUT@',
    ],
    depends: [
        pl_msg_narc # for GMM headers
    ],
    output: '@BASENAME@' + '.bin'
)

be_seq_target_name = 'be_seq.narc'
sub_seq_target_name = 'sub_seq.narc'
waza_seq_target_name = 'waza_seq.narc'

be_seq_private_dir = meson.current_build_dir() / be_seq_target_name + '.p'
sub_seq_private_dir = meson.current_build_dir() / sub_seq_target_name + '.p'
waza_seq_private_dir = meson.current_build_dir() / waza_seq_target_name + '.p'

be_seq_narc = custom_target(be_seq_target_name,
    output: be_seq_target_name,
    input: s_to_bin_gen.process(
        effect_script_files,
        extra_args: ['--out-dir', be_seq_private_dir]
    ),
    command: [
        knarc_exe,
        '-d', '@PRIVATE_DIR@',
        '-p', '@OUTPUT@'
    ]
)

sub_seq_narc = custom_target(sub_seq_target_name,
    output: sub_seq_target_name,
    input: s_to_bin_gen.process(
        subscript_files,
        extra_args: ['--out-dir', sub_seq_private_dir]
    ),
    command: [
        knarc_exe,
        '-d', '@PRIVATE_DIR@',
        '-p', '@OUTPUT@'
    ]
)

waza_seq_narc = custom_target(waza_seq_target_name,
    output: waza_seq_target_name,
    input: s_to_bin_gen.process(
        move_script_files,
        extra_args: ['--out-dir', waza_seq_private_dir]
    ),
    command: [
        knarc_exe,
        '-d', '@PRIVATE_DIR@',
        '-p', '@OUTPUT@'
    ]
)

nitrofs_files += be_seq_narc
nitrofs_files += sub_seq_narc
nitrofs_files += waza_seq_narc