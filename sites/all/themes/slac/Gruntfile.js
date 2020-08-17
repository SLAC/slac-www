module.exports = function(grunt) {
  "use strict";
  grunt.initConfig({
    pkg: grunt.file.readJSON('package.json'),
    watch: {
      css: {
        files: '**/*.scss',
        tasks: ['sass']
      },
      // scripts: {
      //   files: ['js/xeno/*.js'],
      //   tasks: ['jshint','uglify'], //, 'concat:js'], //, 'uglify'],
      //   options: {
      //     nospawn: true,
      //     livereload: 45729
      //   }
      // },
      options: {
        livereload: true,
      },
    },

    sass: {
      dist: {
        files: {
          'css/style.css': 'scss/style.scss'
        }
      }
    },
    //Currently not using Compass
    compass: {
      dev: {
        options: {
          sassDir: 'css/scss',
          cssDir: 'css',
          imagesPath: 'assets/img',
          noLineComments: false,
          outputStyle: 'compressed'
        }
      }
    },

    // jshint: {
    //   myFiles: ['js/xeno/xeno.js']
    // },

    // uglify: {
    //   my_target: {
    //     files: {
    //       'js/xeno.min.js': ['js/xeno/xeno.js']
    //     }
    //   }
    // },
  });

  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-sass');
  grunt.loadNpmTasks('grunt-contrib-watch');
  grunt.loadNpmTasks('grunt-contrib-jshint');
  grunt.loadNpmTasks('grunt-contrib-uglify');
  grunt.registerTask('default', ['watch']);
};
