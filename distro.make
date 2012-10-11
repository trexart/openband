; distro.make
; Usage:
; $ drush make distro.make [directory]

api = 2
core = 7.x

; Include Build Kit distro makefile via URL
;includes[] = https://raw.github.com/trexart/buildkit/master/distro.make
includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/distro.make

projects[buildkit] = null

; Add openband profile to the full Drupal distro build
projects[openband][type] = profile
projects[openband][download][type] = git
projects[openband][download][url] = git://github.com/trexart/openband.git