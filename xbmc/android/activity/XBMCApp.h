  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>xbmca10/xbmc/android/activity/XBMCApp.h at master · empatzero/xbmca10 · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="kwgsuGr/w0YAXYHpKsyGJ1yRlOMBvzcxFYIBW0fo19w=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-c1b7909016a1df6d546eebce65d605438c51f5c7.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-a70d440e2e461f87b4e7a06e02fbe906a55b49b5.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-d76b58e749b52bc47a4c46620bf2c320fabe5248.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-bc24a03e43b13c54969f05228849f804fda1b806.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="66b88c7db22db852b164ad07a8656f79">

        <link data-pjax-transient rel='permalink' href='/empatzero/xbmca10/blob/64afe480b46cd08ad9aba9029a8bcb2b05817135/xbmc/android/activity/XBMCApp.h'>
    <meta property="og:title" content="xbmca10"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/empatzero/xbmca10"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/a23dcb53c2e2ad50821f9011031def0d?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Test environment for A10 cedarv port. Contribute to xbmca10 development by creating an account on GitHub."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="empatzero/xbmca10"/>

    <meta name="description" content="Test environment for A10 cedarv port. Contribute to xbmca10 development by creating an account on GitHub." />

  <link href="https://github.com/empatzero/xbmca10/commits/master.atom" rel="alternate" title="Recent Commits to xbmca10:master" type="application/atom+xml" />

  </head>


  <body class="logged_out page-blob  vis-public fork env-production  ">
    <div id="wrapper">

      

      

      

      


        <div class="header header-logged-out">
          <div class="container clearfix">

            <a class="header-logo-wordmark" href="https://github.com/">
              <img alt="GitHub" class="github-logo-4x" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x.png?1340659511" />
              <img alt="GitHub" class="github-logo-4x-hover" height="30" src="https://a248.e.akamai.net/assets.github.com/images/modules/header/logov7@4x-hover.png?1340659511" />
            </a>

              
<ul class="top-nav">
    <li class="explore"><a href="https://github.com/explore">Explore GitHub</a></li>
  <li class="search"><a href="https://github.com/search">Search</a></li>
  <li class="features"><a href="https://github.com/features">Features</a></li>
    <li class="blog"><a href="https://github.com/blog">Blog</a></li>
</ul>


            <div class="header-actions">
                <a class="button primary" href="https://github.com/signup">Sign up for free</a>
              <a class="button" href="https://github.com/login?return_to=%2Fempatzero%2Fxbmca10%2Fblob%2Fmaster%2Fxbmc%2Fandroid%2Factivity%2FXBMCApp.h">Sign in</a>
            </div>

          </div>
        </div>


      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              


<ul class="pagehead-actions">



    <li>
      <a href="/login?return_to=%2Fempatzero%2Fxbmca10"
        class="minibutton js-toggler-target star-button entice tooltipped upwards"
        title="You must be signed in to use this feature" rel="nofollow">
        <span class="mini-icon mini-icon-star"></span>Star
      </a>
      <a class="social-count js-social-count" href="/empatzero/xbmca10/stargazers">
        26
      </a>
    </li>
    <li>
      <a href="/login?return_to=%2Fempatzero%2Fxbmca10"
        class="minibutton js-toggler-target fork-button entice tooltipped upwards"
        title="You must be signed in to fork a repository" rel="nofollow">
        <span class="mini-icon mini-icon-fork"></span>Fork
      </a>
      <a href="/empatzero/xbmca10/network" class="social-count">
        1,156
      </a>
    </li>
</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/empatzero" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">empatzero</span>
                  </a></span> /
                <strong><a href="/empatzero/xbmca10" class="js-current-repository">xbmca10</a></strong>
                  <span class="fork-flag">
                    <span class="text">forked from <a href="/opdenkamp/xbmc">opdenkamp/xbmc</a></span>
                  </span>
              </h1>
            </div>

            
  <ul class="tabs">
    <li><a href="/empatzero/xbmca10" class="selected" highlight="repo_source repo_downloads repo_commits repo_tags repo_branches">Code</a></li>
    <li><a href="/empatzero/xbmca10/network" highlight="repo_network">Network</a></li>
    <li><a href="/empatzero/xbmca10/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>2</span></a></li>




    <li><a href="/empatzero/xbmca10/graphs" highlight="repo_graphs repo_contributors">Graphs</a></li>


  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/empatzero/xbmca10/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter ">54</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="mini-icon mini-icon-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma" rel="nofollow" title="Dharma">Dharma</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr" rel="nofollow" title="Eden-pvr">Eden-pvr</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/build-pvr-addons/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="build-pvr-addons" rel="nofollow" title="build-pvr-addons">build-pvr-addons</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/cleanup-old-libhts/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cleanup-old-libhts" rel="nofollow" title="cleanup-old-libhts">cleanup-old-libhts</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/fetchurl/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="fetchurl" rel="nofollow" title="fetchurl">fetchurl</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/jsonrpc-pvr/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="jsonrpc-pvr" rel="nofollow" title="jsonrpc-pvr">jsonrpc-pvr</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target selected">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/master/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr" rel="nofollow" title="pvr">pvr</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/toggleaddon/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="toggleaddon" rel="nofollow" title="toggleaddon">toggleaddon</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <div class="select-menu-no-results">Nothing to show</div>
          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk73/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk73" rel="nofollow" title="pvr-ppa-odk73">pvr-ppa-odk73</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk72/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk72" rel="nofollow" title="pvr-ppa-odk72">pvr-ppa-odk72</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk70/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk70" rel="nofollow" title="pvr-ppa-odk70">pvr-ppa-odk70</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk68/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk68" rel="nofollow" title="pvr-ppa-odk68">pvr-ppa-odk68</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk67/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk67" rel="nofollow" title="pvr-ppa-odk67">pvr-ppa-odk67</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk65/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk65" rel="nofollow" title="pvr-ppa-odk65">pvr-ppa-odk65</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk60/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk60" rel="nofollow" title="pvr-ppa-odk60">pvr-ppa-odk60</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk58/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk58" rel="nofollow" title="pvr-ppa-odk58">pvr-ppa-odk58</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk57/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk57" rel="nofollow" title="pvr-ppa-odk57">pvr-ppa-odk57</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk56/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk56" rel="nofollow" title="pvr-ppa-odk56">pvr-ppa-odk56</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk55/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk55" rel="nofollow" title="pvr-ppa-odk55">pvr-ppa-odk55</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk54/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk54" rel="nofollow" title="pvr-ppa-odk54">pvr-ppa-odk54</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk53/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk53" rel="nofollow" title="pvr-ppa-odk53">pvr-ppa-odk53</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk52/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk52" rel="nofollow" title="pvr-ppa-odk52">pvr-ppa-odk52</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk51/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk51" rel="nofollow" title="pvr-ppa-odk51">pvr-ppa-odk51</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk50/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk50" rel="nofollow" title="pvr-ppa-odk50">pvr-ppa-odk50</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk48/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk48" rel="nofollow" title="pvr-ppa-odk48">pvr-ppa-odk48</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk46/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk46" rel="nofollow" title="pvr-ppa-odk46">pvr-ppa-odk46</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk44/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk44" rel="nofollow" title="pvr-ppa-odk44">pvr-ppa-odk44</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk42/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk42" rel="nofollow" title="pvr-ppa-odk42">pvr-ppa-odk42</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk40/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk40" rel="nofollow" title="pvr-ppa-odk40">pvr-ppa-odk40</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk38/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk38" rel="nofollow" title="pvr-ppa-odk38">pvr-ppa-odk38</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk36/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk36" rel="nofollow" title="pvr-ppa-odk36">pvr-ppa-odk36</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk34/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk34" rel="nofollow" title="pvr-ppa-odk34">pvr-ppa-odk34</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk30/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk30" rel="nofollow" title="pvr-ppa-odk30">pvr-ppa-odk30</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk24/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk24" rel="nofollow" title="pvr-ppa-odk24">pvr-ppa-odk24</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk22/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk22" rel="nofollow" title="pvr-ppa-odk22">pvr-ppa-odk22</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk20/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk20" rel="nofollow" title="pvr-ppa-odk20">pvr-ppa-odk20</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk16/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk16" rel="nofollow" title="pvr-ppa-odk16">pvr-ppa-odk16</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/pvr-ppa-odk14/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="pvr-ppa-odk14" rel="nofollow" title="pvr-ppa-odk14">pvr-ppa-odk14</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_rc2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_rc2" rel="nofollow" title="Eden_rc2">Eden_rc2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_rc1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_rc1" rel="nofollow" title="Eden_rc1">Eden_rc1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr_rc1.1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr_rc1.1" rel="nofollow" title="Eden-pvr_rc1.1">Eden-pvr_rc1.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr_rc1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr_rc1" rel="nofollow" title="Eden-pvr_rc1">Eden-pvr_rc1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr_beta3/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr_beta3" rel="nofollow" title="Eden-pvr_beta3">Eden-pvr_beta3</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr_beta2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr_beta2" rel="nofollow" title="Eden-pvr_beta2">Eden-pvr_beta2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden-pvr_beta1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden-pvr_beta1" rel="nofollow" title="Eden-pvr_beta1">Eden-pvr_beta1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_beta3.1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_beta3.1" rel="nofollow" title="Eden_beta3.1">Eden_beta3.1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_beta3/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_beta3" rel="nofollow" title="Eden_beta3">Eden_beta3</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_beta2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_beta2" rel="nofollow" title="Eden_beta2">Eden_beta2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Eden_beta1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Eden_beta1" rel="nofollow" title="Eden_beta1">Eden_beta1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_rc2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_rc2" rel="nofollow" title="Dharma_rc2">Dharma_rc2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_rc1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_rc1" rel="nofollow" title="Dharma_rc1">Dharma_rc1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_beta4/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_beta4" rel="nofollow" title="Dharma_beta4">Dharma_beta4</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_beta3/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_beta3" rel="nofollow" title="Dharma_beta3">Dharma_beta3</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_beta2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_beta2" rel="nofollow" title="Dharma_beta2">Dharma_beta2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/Dharma_beta1/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="Dharma_beta1" rel="nofollow" title="Dharma_beta1">Dharma_beta1</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/11.0-Eden-r2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="11.0-Eden-r2" rel="nofollow" title="11.0-Eden-r2">11.0-Eden-r2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/11.0-Eden-pvr-r2/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="11.0-Eden-pvr-r2" rel="nofollow" title="11.0-Eden-pvr-r2">11.0-Eden-pvr-r2</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/11.0-Eden-pvr/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="11.0-Eden-pvr" rel="nofollow" title="11.0-Eden-pvr">11.0-Eden-pvr</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/11.0-Eden/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="11.0-Eden" rel="nofollow" title="11.0-Eden">11.0-Eden</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/10.1-Dharma/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="10.1-Dharma" rel="nofollow" title="10.1-Dharma">10.1-Dharma</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/10.0-Dharma-pvr/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="10.0-Dharma-pvr" rel="nofollow" title="10.0-Dharma-pvr">10.0-Dharma-pvr</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item js-navigation-target ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/empatzero/xbmca10/blob/10.0-Dharma/xbmc/android/activity/XBMCApp.h" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="10.0-Dharma" rel="nofollow" title="10.0-Dharma">10.0-Dharma</a>
                </div> <!-- /.select-menu-item -->
            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/empatzero/xbmca10" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/empatzero/xbmca10/commits/master" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/empatzero/xbmca10/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">9</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:d74157866166357998360b0a150b0a27 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:d74157866166357998360b0a150b0a27 -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/empatzero/xbmca10" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">xbmca10</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/empatzero/xbmca10/tree/master/xbmc" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">xbmc</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/empatzero/xbmca10/tree/master/xbmc/android" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">android</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/empatzero/xbmca10/tree/master/xbmc/android/activity" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">activity</span></a></span><span class="separator"> / </span><strong class="final-path">XBMCApp.h</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="xbmc/android/activity/XBMCApp.h" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
        </div>

      <a href="/empatzero/xbmca10/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/empatzero/xbmca10/contributors/master/xbmc/android/activity/XBMCApp.h">
          Fetching contributors…

          <div class="participation">
            <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif?1340659511" width="16" /></p>
            <p class="loader-error">Cannot retrieve contributors at this time</p>
          </div>
        </div>

    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/empatzero/xbmca10/blob/64afe480b46cd08ad9aba9029a8bcb2b05817135/xbmc/android/activity/XBMCApp.h" data-title="xbmca10/xbmc/android/activity/XBMCApp.h at master · empatzero/xbmca10 · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>158 lines (129 sloc)</span>
                <span>4.289 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                      <a class="minibutton js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  <a href="/empatzero/xbmca10/raw/master/xbmc/android/activity/XBMCApp.h" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/empatzero/xbmca10/blame/master/xbmc/android/activity/XBMCApp.h" class="button minibutton ">Blame</a>
                  <a href="/empatzero/xbmca10/commits/master/xbmc/android/activity/XBMCApp.h" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="data type-c js-blob-data">
      <table cellpadding="0" cellspacing="0" class="lines">
        <tr>
          <td>
            <pre class="line_numbers"><span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
</pre>
          </td>
          <td width="100%">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cp">#pragma once</span></div><div class='line' id='LC2'><span class="cm">/*</span></div><div class='line' id='LC3'><span class="cm"> *      Copyright (C) 2012 Team XBMC</span></div><div class='line' id='LC4'><span class="cm"> *      http://www.xbmc.org</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> *  This Program is free software; you can redistribute it and/or modify</span></div><div class='line' id='LC7'><span class="cm"> *  it under the terms of the GNU General Public License as published by</span></div><div class='line' id='LC8'><span class="cm"> *  the Free Software Foundation; either version 2, or (at your option)</span></div><div class='line' id='LC9'><span class="cm"> *  any later version.</span></div><div class='line' id='LC10'><span class="cm"> *</span></div><div class='line' id='LC11'><span class="cm"> *  This Program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC12'><span class="cm"> *  but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC13'><span class="cm"> *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the</span></div><div class='line' id='LC14'><span class="cm"> *  GNU General Public License for more details.</span></div><div class='line' id='LC15'><span class="cm"> *</span></div><div class='line' id='LC16'><span class="cm"> *  You should have received a copy of the GNU General Public License</span></div><div class='line' id='LC17'><span class="cm"> *  along with XBMC; see the file COPYING.  If not, see</span></div><div class='line' id='LC18'><span class="cm"> *  &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC19'><span class="cm"> *</span></div><div class='line' id='LC20'><span class="cm"> */</span></div><div class='line' id='LC21'><br/></div><div class='line' id='LC22'><span class="cp">#include &lt;math.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;pthread.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;string&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;vector&gt;</span></div><div class='line' id='LC26'><br/></div><div class='line' id='LC27'><span class="cp">#include &lt;android/native_activity.h&gt;</span></div><div class='line' id='LC28'><br/></div><div class='line' id='LC29'><span class="cp">#include &quot;IActivityHandler.h&quot;</span></div><div class='line' id='LC30'><span class="cp">#include &quot;IInputHandler.h&quot;</span></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><span class="cp">#include &quot;xbmc.h&quot;</span></div><div class='line' id='LC33'><br/></div><div class='line' id='LC34'><br/></div><div class='line' id='LC35'><span class="c1">// forward delares</span></div><div class='line' id='LC36'><span class="k">class</span> <span class="nc">CAESinkAUDIOTRACK</span><span class="p">;</span></div><div class='line' id='LC37'><span class="k">typedef</span> <span class="k">struct</span> <span class="n">_JNIEnv</span> <span class="n">JNIEnv</span><span class="p">;</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="k">struct</span> <span class="n">androidIcon</span></div><div class='line' id='LC40'><span class="p">{</span></div><div class='line' id='LC41'>&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">width</span><span class="p">;</span></div><div class='line' id='LC42'>&nbsp;&nbsp;<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">height</span><span class="p">;</span></div><div class='line' id='LC43'>&nbsp;&nbsp;<span class="kt">void</span> <span class="o">*</span><span class="n">pixels</span><span class="p">;</span></div><div class='line' id='LC44'><span class="p">};</span>  </div><div class='line' id='LC45'><br/></div><div class='line' id='LC46'><span class="k">struct</span> <span class="n">androidPackage</span></div><div class='line' id='LC47'><span class="p">{</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="n">packageName</span><span class="p">;</span></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="n">packageLabel</span><span class="p">;</span></div><div class='line' id='LC50'><span class="p">};</span></div><div class='line' id='LC51'><br/></div><div class='line' id='LC52'><br/></div><div class='line' id='LC53'><span class="k">class</span> <span class="nc">CXBMCApp</span> <span class="o">:</span> <span class="k">public</span> <span class="n">IActivityHandler</span></div><div class='line' id='LC54'><span class="p">{</span></div><div class='line' id='LC55'><span class="nl">public:</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">CXBMCApp</span><span class="p">(</span><span class="n">ANativeActivity</span> <span class="o">*</span><span class="n">nativeActivity</span><span class="p">);</span></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="k">virtual</span> <span class="o">~</span><span class="n">CXBMCApp</span><span class="p">();</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="kt">bool</span> <span class="nf">isValid</span><span class="p">()</span> <span class="p">{</span> <span class="k">return</span> <span class="n">m_activity</span> <span class="o">!=</span> <span class="nb">NULL</span><span class="p">;</span> <span class="p">}</span></div><div class='line' id='LC60'><br/></div><div class='line' id='LC61'>&nbsp;&nbsp;<span class="n">ActivityResult</span> <span class="nf">onActivate</span><span class="p">();</span></div><div class='line' id='LC62'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onDeactivate</span><span class="p">();</span></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onStart</span><span class="p">();</span></div><div class='line' id='LC65'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onResume</span><span class="p">();</span></div><div class='line' id='LC66'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onPause</span><span class="p">();</span></div><div class='line' id='LC67'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onStop</span><span class="p">();</span></div><div class='line' id='LC68'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onDestroy</span><span class="p">();</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onSaveState</span><span class="p">(</span><span class="kt">void</span> <span class="o">**</span><span class="n">data</span><span class="p">,</span> <span class="kt">size_t</span> <span class="o">*</span><span class="n">size</span><span class="p">);</span></div><div class='line' id='LC71'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onConfigurationChanged</span><span class="p">();</span></div><div class='line' id='LC72'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onLowMemory</span><span class="p">();</span></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onCreateWindow</span><span class="p">(</span><span class="n">ANativeWindow</span><span class="o">*</span> <span class="n">window</span><span class="p">);</span></div><div class='line' id='LC75'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onResizeWindow</span><span class="p">();</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onDestroyWindow</span><span class="p">();</span></div><div class='line' id='LC77'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onGainFocus</span><span class="p">();</span></div><div class='line' id='LC78'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">onLostFocus</span><span class="p">();</span></div><div class='line' id='LC79'><br/></div><div class='line' id='LC80'><br/></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="k">static</span> <span class="n">ANativeWindow</span><span class="o">*</span> <span class="nf">GetNativeWindow</span><span class="p">()</span> <span class="p">{</span> <span class="k">return</span> <span class="n">m_window</span><span class="p">;</span> <span class="p">};</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">SetBuffersGeometry</span><span class="p">(</span><span class="kt">int</span> <span class="n">width</span><span class="p">,</span> <span class="kt">int</span> <span class="n">height</span><span class="p">,</span> <span class="kt">int</span> <span class="n">format</span><span class="p">);</span></div><div class='line' id='LC83'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">android_printf</span><span class="p">(</span><span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">format</span><span class="p">,</span> <span class="p">...);</span></div><div class='line' id='LC84'>&nbsp;&nbsp;</div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">GetBatteryLevel</span><span class="p">();</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">StartActivity</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">package</span><span class="p">);</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">ListApplications</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">vector</span> <span class="o">&lt;</span><span class="n">androidPackage</span><span class="o">&gt;</span> <span class="o">*</span><span class="n">applications</span><span class="p">);</span></div><div class='line' id='LC88'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">GetIconSize</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">packageName</span><span class="p">,</span> <span class="kt">int</span> <span class="o">*</span><span class="n">width</span><span class="p">,</span> <span class="kt">int</span> <span class="o">*</span><span class="n">height</span><span class="p">);</span></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">GetIcon</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">packageName</span><span class="p">,</span> <span class="kt">void</span><span class="o">*</span> <span class="n">buffer</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">bufSize</span><span class="p">);</span> </div><div class='line' id='LC90'>&nbsp;&nbsp;<span class="cm">/*!</span></div><div class='line' id='LC91'><span class="cm">   * \brief If external storage is available, it returns the path for the external storage (for the specified type)</span></div><div class='line' id='LC92'><span class="cm">   * \param path will contain the path of the external storage (for the specified type)</span></div><div class='line' id='LC93'><span class="cm">   * \param type optional type. Possible values are &quot;&quot;, &quot;files&quot;, &quot;music&quot;, &quot;videos&quot;, &quot;pictures&quot;, &quot;photos, &quot;downloads&quot;</span></div><div class='line' id='LC94'><span class="cm">   * \return true if external storage is available and a valid path has been stored in the path parameter</span></div><div class='line' id='LC95'><span class="cm">   */</span></div><div class='line' id='LC96'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">GetExternalStorage</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">path</span><span class="p">,</span> <span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">type</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">);</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">GetStorageUsage</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">path</span><span class="p">,</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">usage</span><span class="p">);</span></div><div class='line' id='LC98'><br/></div><div class='line' id='LC99'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">GetDPI</span><span class="p">();</span></div><div class='line' id='LC100'><span class="nl">protected:</span></div><div class='line' id='LC101'>&nbsp;&nbsp;<span class="c1">// limit who can access AttachCurrentThread/DetachCurrentThread</span></div><div class='line' id='LC102'>&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">CAESinkAUDIOTRACK</span><span class="p">;</span></div><div class='line' id='LC103'>&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">CAndroidFeatures</span><span class="p">;</span></div><div class='line' id='LC104'>&nbsp;&nbsp;<span class="k">friend</span> <span class="k">class</span> <span class="nc">CFileAndroidApp</span><span class="p">;</span></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">AttachCurrentThread</span><span class="p">(</span><span class="n">JNIEnv</span><span class="o">**</span> <span class="n">p_env</span><span class="p">,</span> <span class="kt">void</span><span class="o">*</span> <span class="n">thr_args</span> <span class="o">=</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC107'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">int</span> <span class="nf">DetachCurrentThread</span><span class="p">();</span></div><div class='line' id='LC108'><br/></div><div class='line' id='LC109'><span class="nl">private:</span></div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="k">static</span> <span class="kt">bool</span> <span class="nf">HasLaunchIntent</span><span class="p">(</span><span class="k">const</span> <span class="n">std</span><span class="o">::</span><span class="n">string</span> <span class="o">&amp;</span><span class="n">package</span><span class="p">);</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="kt">bool</span> <span class="nf">getWakeLock</span><span class="p">(</span><span class="n">JNIEnv</span> <span class="o">*</span><span class="n">env</span><span class="p">);</span></div><div class='line' id='LC112'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">acquireWakeLock</span><span class="p">();</span></div><div class='line' id='LC113'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">releaseWakeLock</span><span class="p">();</span></div><div class='line' id='LC114'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">run</span><span class="p">();</span></div><div class='line' id='LC115'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">stop</span><span class="p">();</span></div><div class='line' id='LC116'><br/></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="k">static</span> <span class="n">ANativeActivity</span> <span class="o">*</span><span class="n">m_activity</span><span class="p">;</span></div><div class='line' id='LC118'>&nbsp;&nbsp;<span class="n">jobject</span> <span class="n">m_wakeLock</span><span class="p">;</span></div><div class='line' id='LC119'>&nbsp;&nbsp;</div><div class='line' id='LC120'>&nbsp;&nbsp;<span class="k">typedef</span> <span class="k">enum</span> <span class="p">{</span></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC_Initialize hasn&#39;t been executed yet</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Uninitialized</span><span class="p">,</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC_Initialize has been successfully executed</span></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Initialized</span><span class="p">,</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC is currently rendering</span></div><div class='line' id='LC126'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Rendering</span><span class="p">,</span></div><div class='line' id='LC127'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC has stopped rendering because it has lost focus</span></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// but it still has an EGLContext</span></div><div class='line' id='LC129'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Unfocused</span><span class="p">,</span></div><div class='line' id='LC130'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC has been paused/stopped and does not have an</span></div><div class='line' id='LC131'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// EGLContext</span></div><div class='line' id='LC132'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Paused</span><span class="p">,</span></div><div class='line' id='LC133'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC is being stopped</span></div><div class='line' id='LC134'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Stopping</span><span class="p">,</span></div><div class='line' id='LC135'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// XBMC has stopped</span></div><div class='line' id='LC136'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Stopped</span><span class="p">,</span></div><div class='line' id='LC137'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// An error has occured</span></div><div class='line' id='LC138'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Error</span></div><div class='line' id='LC139'>&nbsp;&nbsp;<span class="p">}</span> <span class="n">AppState</span><span class="p">;</span></div><div class='line' id='LC140'><br/></div><div class='line' id='LC141'>&nbsp;&nbsp;<span class="k">typedef</span> <span class="k">struct</span> <span class="p">{</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">pthread_t</span> <span class="kr">thread</span><span class="p">;</span></div><div class='line' id='LC143'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">pthread_mutex_t</span> <span class="n">mutex</span><span class="p">;</span></div><div class='line' id='LC144'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">AppState</span> <span class="n">appState</span><span class="p">;</span></div><div class='line' id='LC145'>&nbsp;&nbsp;<span class="p">}</span> <span class="n">State</span><span class="p">;</span></div><div class='line' id='LC146'><br/></div><div class='line' id='LC147'>&nbsp;&nbsp;<span class="n">State</span> <span class="n">m_state</span><span class="p">;</span></div><div class='line' id='LC148'>&nbsp;&nbsp;</div><div class='line' id='LC149'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">setAppState</span><span class="p">(</span><span class="n">AppState</span> <span class="n">state</span><span class="p">);</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC151'>&nbsp;&nbsp;<span class="k">static</span> <span class="n">ANativeWindow</span><span class="o">*</span> <span class="n">m_window</span><span class="p">;</span></div><div class='line' id='LC152'>&nbsp;&nbsp;</div><div class='line' id='LC153'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">XBMC_Pause</span><span class="p">(</span><span class="kt">bool</span> <span class="n">pause</span><span class="p">);</span></div><div class='line' id='LC154'>&nbsp;&nbsp;<span class="kt">void</span> <span class="nf">XBMC_Stop</span><span class="p">();</span></div><div class='line' id='LC155'>&nbsp;&nbsp;<span class="kt">bool</span> <span class="nf">XBMC_DestroyDisplay</span><span class="p">();</span></div><div class='line' id='LC156'>&nbsp;&nbsp;<span class="kt">bool</span> <span class="nf">XBMC_SetupDisplay</span><span class="p">();</span></div><div class='line' id='LC157'><span class="p">};</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543527" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.10655s from fe16.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/empatzero/xbmca10/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.10701' data-host='fe16'></span>
    
  </body>
</html>

