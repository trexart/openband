api = 2
core = 7.x

; Includes ====================================================================
; Include Build Kit install profile makefile via URL
;includes[] = https://raw.github.com/trexart/buildkit/master/buildkit.make
;includes[] = http://drupalcode.org/project/buildkit.git/blob_plain/refs/heads/7.x-2.x:/drupal-org.make

; The Panopoly Foundation

projects[panopoly_core][version] = 1.0-beta6
projects[panopoly_core][subdir] = panopoly

projects[panopoly_images][version] = 1.0-beta6
projects[panopoly_images][subdir] = panopoly

projects[panopoly_theme][version] = 1.0-beta6
projects[panopoly_theme][subdir] = panopoly

projects[panopoly_magic][version] = 1.0-beta6
projects[panopoly_magic][subdir] = panopoly

projects[panopoly_widgets][version] = 1.0-beta6
projects[panopoly_widgets][subdir] = panopoly

projects[panopoly_admin][version] = 1.0-beta6
projects[panopoly_admin][subdir] = panopoly

projects[panopoly_users][version] = 1.0-beta6
projects[panopoly_users][subdir] = panopoly

; The Panopoly Toolset

projects[panopoly_pages][version] = 1.0-beta6
projects[panopoly_pages][subdir] = panopoly

projects[panopoly_wysiwyg][version] = 1.0-beta6
projects[panopoly_wysiwyg][subdir] = panopoly

projects[panopoly_search][version] = 1.0-beta6
projects[panopoly_search][subdir] = panopoly

; Modules =====================================================================

projects[media_gallery][version] = 1.0-beta8
projects[media_gallery][subdir] = contrib

projects[multiform][version] = 1.0
projects[multiform][subdir] = contrib

projects[plupload][version] = 1.0
projects[plupload][subdir] = contrib

projects[menu_trail_by_path][version] = 2.0-rc2
projects[menu_trail_by_path][subdir] = contrib

; Features ====================================================================

; Themes ======================================================================

;projects[omega][type] = module
;projects[omega][version] = 3.1

;projects[delta][type] = module
;projects[delta][subdir] = contrib
;projects[delta][version] = 3.0-beta11

;projects[omega_tools][type] = module
;projects[omega_tools][subdir] = contrib
;projects[omega_tools][version] = 3.0-rc4

projects[tao][version] = 3.0-beta4
projects[rubik][version] = 4.0-beta8
projects[sasson][version] = 2.6

; Libraries ===================================================================

;libraries[ckeditor][download][type] = get
;libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5/ckeditor_3.5.tar.gz
;libraries[ckeditor][download][url] = http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.5/ckeditor_3.6.5.tar.gz

;libraries[photoswipe][download][type] = get
;libraries[photoswipe][download][url] = http://github.com/downloads/codecomputerlove/PhotoSwipe/code.photoswipe-3.0.5.zip

;libraries[jquery-1.7][download][type] = get
;libraries[jquery-1.7][download][url] = http://code.jquery.com/jquery-1.7.2.min.js