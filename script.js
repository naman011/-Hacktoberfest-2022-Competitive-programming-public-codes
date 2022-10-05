(function ($) {
    "use strict";

    $(window).on("load", function() {
        $("#preloader").fadeOut(1200);
        $("#preloader-status").delay(200).fadeOut("slow");
        });
    
        setTimeout(function() {
        $(".preloader-bg").addClass("preloader-bg-disappear");
        $(".ms-left, .ms-right").addClass("fadeIn");
        }, 1000);


    $(document).ready(function(){
        // menu click event
        $('.menuBtn').click(function() {
            $(this).toggleClass('act');
                if($(this).hasClass('act')) {
                    $('.mainMenu').addClass('act');
                }
                else {
                    $('.mainMenu').removeClass('act');
                }
        });
    });
    
})(jQuery);



var swiper = new Swiper('.swiper-container', {
    speed: 1000,
    direction: 'horizontal',
    navigation: {
        nextEl: '.next',
        prevEl: '.prev',
    },

    slidesPerView: 1,
    spaceBetween: 30,

    keyboard: {
        enabled: true,
        onlyInViewport: false,
    },
    // autoplay: 
    // {
    //   delay: 2000,
    // },
    loop: true,

});

var swiper2 = new Swiper('.swiper-container-2', {
    speed: 1000,
    direction: 'horizontal',
    navigation: {
        nextEl: '.next2',
        prevEl: '.prev2',
    },

    slidesPerView: 1,
    spaceBetween: 30,

    keyboard: {
        enabled: true,
        onlyInViewport: true,
    },
    // autoplay: 
    // {
    //   delay: 2000,
    // },
    loop: true,

});

var swiper3 = new Swiper('.swiper-container-3', {
    speed: 1000,
    direction: 'horizontal',
    navigation: {
        nextEl: '.next3',
        prevEl: '.prev3',
    },

    slidesPerView: 5,
    spaceBetween: 30,

    keyboard: {
        enabled: true,
        onlyInViewport: false,
    },
    autoplay: 
    {
      delay: 2000,
    },
    loop: true,
    breakpoints: {
        1:{
            slidesPerView: 1,
        },

       680: {
           slidesPerView: 2,
       },

       768: {
           slidesPerView: 3,
       },

       1024: {
        slidesPerView: 4,
       },

       1300: {
        slidesPerView: 5,
       }
    
    },

});

$('.slider').slick({
    slidesToShow: 3,
    slidesToScroll: 1,
    arrows: true,
    dots: false,
    centerMode: true,
    variableWidth: true,
    infinite: true,
    focusOnSelect: true,
    cssEase: 'linear',
    // touchMove: true,
    prevArrow: '<button class="slick-prev"> < </button>',
    nextArrow: '<button class="slick-next"> > </button>',

});



var imgs = $('.slider img');
imgs.each(function () {
    var item = $(this).closest('.item');
    item.css({
        'background-image': 'url(' + $(this).attr('src') + ')',
        'background-position': 'center',
        '-webkit-background-size': 'cover',
        'background-size': 'cover',
    });
    $(this).hide();
});


$(document).ready(function(){
    $('.center-slider').slick({
      slidesToShow: 5,
      slidesToScroll: 1,
      centerMode: true,
      arrows: true,
      dots: false,
      speed: 300,
      centerPadding: '20px',
      infinite: true,
      autoplaySpeed: 5000,
      autoplay: true
    });
  });