<?php
/**
 * @file
 * centercampo_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function centercampo_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'afdelinger';
  $context->description = 'afdelinger med kort';
  $context->tag = 'Afdeling Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'afdelinger/*' => 'afdelinger/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-afdelinger_adresse-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_adresse-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-3bfb6046aa642b60eb38945b27d507a8' => array(
          'module' => 'views',
          'delta' => '3bfb6046aa642b60eb38945b27d507a8',
          'region' => 'content',
          'weight' => '5',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-afdelinger_filer-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_filer-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Afdeling Global');
  t('afdelinger med kort');
  $export['afdelinger'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'botilbud_global';
  $context->description = 'Global blokker til botilbud';
  $context->tag = 'Botilbud Global';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'center' => 'center',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-shortcuts-block' => array(
          'module' => 'views',
          'delta' => 'shortcuts-block',
          'region' => 'content_pre',
          'weight' => '-10',
        ),
        'views-amager_bosted_content-block_8' => array(
          'module' => 'views',
          'delta' => 'amager_bosted_content-block_8',
          'region' => 'content_bosted',
          'weight' => '-10',
        ),
        'views-video_block-block_7' => array(
          'module' => 'views',
          'delta' => 'video_block-block_7',
          'region' => 'content_video',
          'weight' => '-10',
        ),
        'views-ambassadors-block_6' => array(
          'module' => 'views',
          'delta' => 'ambassadors-block_6',
          'region' => 'content_video',
          'weight' => '-9',
        ),
        'views-ambassadors_list-block_7' => array(
          'module' => 'views',
          'delta' => 'ambassadors_list-block_7',
          'region' => 'content_amba',
          'weight' => '-10',
        ),
        'views-213d0774ea002059277369a863e19294' => array(
          'module' => 'views',
          'delta' => '213d0774ea002059277369a863e19294',
          'region' => 'content_amba',
          'weight' => '-8',
        ),
        'views-3bfb6046aa642b60eb38945b27d507a8' => array(
          'module' => 'views',
          'delta' => '3bfb6046aa642b60eb38945b27d507a8',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Botilbud Global');
  t('Global blokker til botilbud');
  $export['botilbud_global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'campo_undersider';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/*' => 'content/*',
        '~content/kontakt' => '~content/kontakt',
        '~content/kontakt/*' => '~content/kontakt/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-afdelinger_filer-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_filer-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['campo_undersider'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forside';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-blog_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'blog_slideshow-block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-flex_text_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'flex_text_slideshow-block',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-shortcuts_gr_n-block' => array(
          'module' => 'views',
          'delta' => 'shortcuts_gr_n-block',
          'region' => 'content_pre',
          'weight' => '-10',
        ),
        'views-afdelinger_bodytext-block_2' => array(
          'module' => 'views',
          'delta' => 'afdelinger_bodytext-block_2',
          'region' => 'content_bosted',
          'weight' => '-10',
        ),
        'views-bosted_content-block' => array(
          'module' => 'views',
          'delta' => 'bosted_content-block',
          'region' => 'content_bosted',
          'weight' => '-9',
        ),
        'views-video_block-block' => array(
          'module' => 'views',
          'delta' => 'video_block-block',
          'region' => 'content_video',
          'weight' => '-10',
        ),
        'views-ambassadors-block' => array(
          'module' => 'views',
          'delta' => 'ambassadors-block',
          'region' => 'content_video',
          'weight' => '-9',
        ),
        'views-ambassadors_list-block' => array(
          'module' => 'views',
          'delta' => 'ambassadors_list-block',
          'region' => 'content_amba',
          'weight' => '-10',
        ),
        'views-213d0774ea002059277369a863e19294' => array(
          'module' => 'views',
          'delta' => '213d0774ea002059277369a863e19294',
          'region' => 'content_amba',
          'weight' => '-9',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'campo_foundation' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content_pre' => 0,
          'content_bosted' => 0,
          'content_video' => 0,
          'content_amba' => 0,
          'content' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'video_bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zurb_foundation' => array(
        'disable' => array(
          'header' => 0,
          'header_left' => 0,
          'header_right' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['forside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forside_botilbud';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'botilbud' => 'botilbud',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'views-blog_slideshow-block_2' => array(
          'module' => 'views',
          'delta' => 'blog_slideshow-block_2',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-flex_text_slideshow-block_2' => array(
          'module' => 'views',
          'delta' => 'flex_text_slideshow-block_2',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-shortcuts_gr_n-block' => array(
          'module' => 'views',
          'delta' => 'shortcuts_gr_n-block',
          'region' => 'content_pre',
          'weight' => '-10',
        ),
        'views-afdelinger_bodytext-block_2' => array(
          'module' => 'views',
          'delta' => 'afdelinger_bodytext-block_2',
          'region' => 'content_bosted',
          'weight' => '-10',
        ),
        'views-bosted_content-block' => array(
          'module' => 'views',
          'delta' => 'bosted_content-block',
          'region' => 'content_bosted',
          'weight' => '-9',
        ),
        'views-video_block-block_5' => array(
          'module' => 'views',
          'delta' => 'video_block-block_5',
          'region' => 'content_video',
          'weight' => '-10',
        ),
        'views-ambassadors-block_6' => array(
          'module' => 'views',
          'delta' => 'ambassadors-block_6',
          'region' => 'content_video',
          'weight' => '-8',
        ),
        'views-ambassadors_list-block_5' => array(
          'module' => 'views',
          'delta' => 'ambassadors_list-block_5',
          'region' => 'content_amba',
          'weight' => '-8',
        ),
        'views-e275f3ae38ed83de597daea793364885' => array(
          'module' => 'views',
          'delta' => 'e275f3ae38ed83de597daea793364885',
          'region' => 'content_amba',
          'weight' => '-7',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'campo_foundation' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content_pre' => 0,
          'content_bosted' => 0,
          'content_video' => 0,
          'content_amba' => 0,
          'content' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'video_bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zurb_foundation' => array(
        'disable' => array(
          'header' => 0,
          'header_left' => 0,
          'header_right' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['forside_botilbud'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'forside_center_campo';
  $context->description = 'Organisation / center-campo forside';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'centercampo' => 'centercampo',
        'organisation' => 'organisation',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-blog_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_slideshow-block_1',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-flex_text_slideshow-block_1' => array(
          'module' => 'views',
          'delta' => 'flex_text_slideshow-block_1',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'views-shortcuts_gr_n-block_1' => array(
          'module' => 'views',
          'delta' => 'shortcuts_gr_n-block_1',
          'region' => 'content_pre',
          'weight' => '-9',
        ),
        'views-afdelinger_bodytext-block_2' => array(
          'module' => 'views',
          'delta' => 'afdelinger_bodytext-block_2',
          'region' => 'content_bosted',
          'weight' => '-10',
        ),
        'views-forside_accordion_green-block' => array(
          'module' => 'views',
          'delta' => 'forside_accordion_green-block',
          'region' => 'content_bosted',
          'weight' => '-9',
        ),
        'views-video_block-block_1' => array(
          'module' => 'views',
          'delta' => 'video_block-block_1',
          'region' => 'content_video',
          'weight' => '-10',
        ),
        'views-ambassadors-block_5' => array(
          'module' => 'views',
          'delta' => 'ambassadors-block_5',
          'region' => 'content_video',
          'weight' => '-8',
        ),
        'views-ambassadors_list-block_6' => array(
          'module' => 'views',
          'delta' => 'ambassadors_list-block_6',
          'region' => 'content_amba',
          'weight' => '-8',
        ),
        'views-51ce8f5472b5b12d48f96a8512a92c1f' => array(
          'module' => 'views',
          'delta' => '51ce8f5472b5b12d48f96a8512a92c1f',
          'region' => 'content_amba',
          'weight' => '-7',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'campo_foundation' => array(
        'disable' => array(
          'sidebar_first' => 'sidebar_first',
          'sidebar_second' => 'sidebar_second',
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content_pre' => 0,
          'content_bosted' => 0,
          'content_video' => 0,
          'content_amba' => 0,
          'content' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'video_bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zurb_foundation' => array(
        'disable' => array(
          'header' => 0,
          'header_left' => 0,
          'header_right' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Organisation / center-campo forside');
  $export['forside_center_campo'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'nyheder, reports';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nyheder/*' => 'nyheder/*',
        'reports/*' => 'reports/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-sidebarsecond_text-block' => array(
          'module' => 'views',
          'delta' => 'sidebarsecond_text-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
    'region' => array(
      'best_responsive' => array(
        'disable' => array(
          'sidebar_first' => 0,
          'header' => 0,
          'preface_first' => 0,
          'preface_middle' => 0,
          'preface_last' => 0,
          'content_top' => 0,
          'content' => 0,
          'help' => 0,
          'footer' => 0,
          'footer_first' => 0,
          'footer_second' => 0,
          'footer_third' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'campo_foundation' => array(
        'disable' => array(
          'content_video' => 'content_video',
          'content_amba' => 'content_amba',
          'header' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content_pre' => 0,
          'content_bosted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'video_bottom' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'seven' => array(
        'disable' => array(
          'content' => 0,
          'help' => 0,
          'page_top' => 0,
          'page_bottom' => 0,
          'sidebar_first' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
      'zurb_foundation' => array(
        'disable' => array(
          'header' => 0,
          'header_left' => 0,
          'header_right' => 0,
          'navigation' => 0,
          'help' => 0,
          'highlighted' => 0,
          'content' => 0,
          'sidebar_first' => 0,
          'sidebar_second' => 0,
          'footer_first' => 0,
          'footer_middle' => 0,
          'footer_last' => 0,
          'dashboard_main' => 0,
          'dashboard_sidebar' => 0,
          'dashboard_inactive' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('nyheder, reports');
  $export['global'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'kontakt_side';
  $context->description = '';
  $context->tag = 'Kontakt';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/kontakt' => 'content/kontakt',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-afdelinger_filer-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_filer-block',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Kontakt');
  $export['kontakt_side'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'organisations_sider';
  $context->description = 'Center Campo Organisationssider';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'organisation/*' => 'organisation/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'menu_block-7' => array(
          'module' => 'menu_block',
          'delta' => '7',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu_block-3' => array(
          'module' => 'menu_block',
          'delta' => '3',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-afdelinger_filer-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_filer-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Center Campo Organisationssider');
  $export['organisations_sider'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'underside';
  $context->description = 'afdeling underside UDEN kort';
  $context->tag = 'Afdeling Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'afdelinger_underside/*' => 'afdelinger_underside/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-3bfb6046aa642b60eb38945b27d507a8' => array(
          'module' => 'views',
          'delta' => '3bfb6046aa642b60eb38945b27d507a8',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu_block-2' => array(
          'module' => 'menu_block',
          'delta' => '2',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'views-afdelinger_filer-block' => array(
          'module' => 'views',
          'delta' => 'afdelinger_filer-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Afdeling Global');
  t('afdeling underside UDEN kort');
  $export['underside'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'video';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'videoer/video' => 'videoer/video',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-afdelinger_topslider-block_1' => array(
          'module' => 'views',
          'delta' => 'afdelinger_topslider-block_1',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'content_video',
          'weight' => '-10',
        ),
        'views-carousel_of_video-block' => array(
          'module' => 'views',
          'delta' => 'carousel_of_video-block',
          'region' => 'content_video',
          'weight' => '-9',
        ),
        'views-637a0364adff55868c96664f44384ae8' => array(
          'module' => 'views',
          'delta' => '637a0364adff55868c96664f44384ae8',
          'region' => 'content_video',
          'weight' => '-8',
        ),
        'views-reports-block' => array(
          'module' => 'views',
          'delta' => 'reports-block',
          'region' => 'content',
          'weight' => '10',
        ),
        'menu_block-5' => array(
          'module' => 'menu_block',
          'delta' => '5',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['video'] = $context;

  return $export;
}
