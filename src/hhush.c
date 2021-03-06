# i n c l u d e   < s t d i o . h >      
 # i n c l u d e   < u n i s t d . h >  
 # i n c l u d e   < s t r i n g . h >    
 # i n c l u d e   < t i m e . h >        
 # i n c l u d e   < s t d l i b . h >  
 # i n c l u d e   < d i r e n t . h >  
 # i n c l u d e   < s y s / t y p e s . h >  
 # d e f i n e   P A T H _ M A X   4 0 9 6  
  
 / / F o r w a r d   D e c l a r a t i o n s  
 v o i d   c u t _ n e w l i n e ( c h a r * ) ;  
 i n t   g r e p _ l i n e ( c h a r   * p a t t e r n ,   c h a r   * s o u r c e ) ;  
 s t r u c t   s t r u c _ c o m m a n d s   c o m m a n d _ l i s t ( c h a r * ) ;  
 s t r u c t   s t r u c _ c o m m a n d s   {  
         c h a r   p a r t _ s t r i n g s [ 1 2 8 ] [ 2 5 6 ] ;  
         i n t   s i z e ;  
 } ;  
  
 / / F u n c t i o n s  
 v o i d   c u t _ n e w l i n e ( c h a r   c o m m a n d [ ] )   {  
  
         s i z e _ t   l e n g t h   =   s t r l e n ( c o m m a n d ) ;  
         c o m m a n d [ l e n g t h - 1 ]   =   ' \ 0 ' ;  
 }  
  
 / / S i m p l e   c h e c k   i f   a   p a t t e r n   i s   c o n t a i n e d   i n   a   l i n e  
 i n t   g r e p _ l i n e ( c h a r   * p a t t e r n ,   c h a r   * s o u r c e )   {  
  
         i f ( s t r s t r ( s o u r c e ,   p a t t e r n )   ! =   N U L L )   r e t u r n   1 ;  
         e l s e   r e t u r n   0 ;  
 }  
  
 s t r u c t   s t r u c _ c o m m a n d s   c o m m a n d _ l i s t ( c h a r   * c o m m a n d )   {  
  
         c h a r   p a r t _ s t r i n g s [ 1 2 8 ] [ 2 5 6 ] ;  
         i n t   s t r i n g _ p o s i t i o n   =   0 ;  
         i n t   c h a r _ p o s i t i o n   =   0 ;  
  
         / / T o   c h e c k   i f   t h e   w h i l e   l o o p   g o t   e n t e r e d   i n   a   f o r   l o o p   i t e r a t i o n  
         i n t   w h i l e _ b o o l e a n   =   0 ;  
    
         i n t   i ;  
         f o r ( i   =   0 ;   i   <   2 5 6 ;   i + + )   {  
  
 	 w h i l e _ b o o l e a n   =   0 ;  
  
 	 / / O n l y   g o   t h r o u g h   t h e   c o m m a n d   u n t i l   t h e   e n d   o f   t h e   i n p u t   i s   r e a c h e d  
                 i f ( c o m m a n d [ i ]   = =   ' \ 0 ' )   b r e a k ;  
 	  
 	 w h i l e ( c o m m a n d [ i ]   ! =   '   '   & &   c o m m a n d [ i ]   ! =   ' \ t '   & &   c o m m a n d [ i ]   ! =   ' \ 0 '   & &   i   <   2 5 6 )   {  
  
 	         w h i l e _ b o o l e a n   =   1 ;  
   	         p a r t _ s t r i n g s [ s t r i n g _ p o s i t i o n ] [ c h a r _ p o s i t i o n ]   =   c o m m a n d [ i ] ;  
 	          
 	         i + + ;  
 	         c h a r _ p o s i t i o n + + ;  
 	 }  
  
 	 / / I f   t h e   w h i l e   l o o p   g o t   e n t e r e d ,   a   p a r t   s t r i n g   w a s   f o u n d ,   t h e r e f o r e   t h e   s t r i n g _ p o s i t i o n    
                 / / c o u n t e r   h a s   t o   g e t   r e a d y   f o r   t h e   n e x t   s t r i n g ,   a n d   t h e   c u r r e n t   s t r i n g   h a s   t o   g e t   n u l l   t e r m i n a t e d  
 	 i f ( w h i l e _ b o o l e a n   = =   1 )   {  
  
 	         p a r t _ s t r i n g s [ s t r i n g _ p o s i t i o n ] [ c h a r _ p o s i t i o n ]   =   ' \ 0 ' ;  
 	         s t r i n g _ p o s i t i o n + + ; 	          
 	 }  
 	 c h a r _ p o s i t i o n   =   0 ;  
         }  
         s t r u c t   s t r u c _ c o m m a n d s   x ;  
         m e m c p y ( x . p a r t _ s t r i n g s ,   p a r t _ s t r i n g s ,   s i z e o f ( p a r t _ s t r i n g s ) ) ;  
         x . s i z e   =   s t r i n g _ p o s i t i o n ;  
  
         r e t u r n   x ;  
 }  
  
 i n t   m a i n ( v o i d )   {  
  
         c h a r   c o m m a n d [ 2 5 6 ] ;  
         i n t   b o o l e a n   =   1 ;  
  
         / / M e m o r y   a l l o c a t i o n   f o r   h i s t o r y  
         i n t   h i s t _ a r r _ s i z e   =   1 2 0 0 ;  
         i n t   h i s t _ c o u n t e r   =   0 ;  
         c h a r   * * h i s t _ a r r   =   m a l l o c ( h i s t _ a r r _ s i z e   *   s i z e o f ( c h a r   * ) ) ;  
         c h a r   * * h i s t _ a r r _ t e s t ;  
         i f ( h i s t _ a r r   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
  
         i n t   i ;  
         f o r ( i   =   0 ;   i   <   h i s t _ a r r _ s i z e ;   i + + )   {  
  
 	 h i s t _ a r r [ i ]   =   m a l l o c ( 2 5 6 ) ;  
 	 i f ( h i s t _ a r r [ i ]   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
         }          
  
         / / S a v i n g   p a t h   f o r   l a t e r   u s e  
         c h a r   h h u s h _ d i r e c t o r y [ P A T H _ M A X ] ;  
         g e t c w d ( h h u s h _ d i r e c t o r y ,   P A T H _ M A X ) ;  
  
         / / L o a d i n g   h i s t o r y   f r o m   . h h u s h . h i s t f i l e  
         F I L E   * h i s t o r y _ f i l e ;  
         h i s t o r y _ f i l e   =   f o p e n ( " . h h u s h . h i s t f i l e " ,   " r " ) ;  
         i f ( h i s t o r y _ f i l e   ! =   N U L L )   {  
  
 	 i n t   i ;  
 	 f o r ( i   =   0 ;   i   <   1 0 0 0 ;   i + + )   {  
  
 	         c h a r   n u l l _ c h e c k [ 2 5 6 ] ;  
 	         i f ( f g e t s ( n u l l _ c h e c k ,   2 5 6 ,   h i s t o r y _ f i l e )   ! =   N U L L )   s t r c p y ( h i s t _ a r r [ i ] ,   n u l l _ c h e c k ) ;  
 	         e l s e   b r e a k ;  
 	         c u t _ n e w l i n e ( h i s t _ a r r [ i ] ) ;  
 	         h i s t _ c o u n t e r + + ;  
 	 }  
 	 f c l o s e ( h i s t o r y _ f i l e ) ;  
         }  
         e l s e   p r i n t f ( " C o u l d   n o t   r e a d   h i s t o r y   f i l e " ) ;  
          
         w h i l e ( b o o l e a n )   {  
  
 	 c h a r   d i r _ b u f f e r [ P A T H _ M A X ] ; 	  
                 p r i n t f ( " % s   $   " ,   g e t c w d ( d i r _ b u f f e r ,   P A T H _ M A X ) ) ;  
  
                 f g e t s ( c o m m a n d ,   s i z e o f ( c o m m a n d ) ,   s t d i n ) ;  
  
 	 / / f g e t s   i n c l u d e s   t h e   \ n   a t   t h e   e n d   o f   t h e   s t r i n g ,   w h i c h   h a s   t o   b e   r e m o v e d   m a n u a l l y  
                 c u t _ n e w l i n e ( c o m m a n d ) ;    
  
 	 / / R e a l l o c a t i n g   m e m o r y   f o r   h i s t o r y   i f   n e e d e d  
 	 i f ( h i s t _ c o u n t e r   = =   h i s t _ a r r _ s i z e )   {  
  
 	         h i s t _ a r r _ s i z e   + =   2 0 0 ;  
  
 	         / / C h e c k   i f   r e a l l o c   w o r k s   b e f o r e   c h a n g i n g   t h e   p o i n t e r   o f   h i s t _ a r r  
 	         h i s t _ a r r _ t e s t   =   r e a l l o c ( h i s t _ a r r ,   h i s t _ a r r _ s i z e   *   s i z e o f ( c h a r   * ) ) ;  
 	         i f ( h i s t _ a r r   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
 	         e l s e   h i s t _ a r r   =   h i s t _ a r r _ t e s t ;  
  
 	         i n t   i ;  
 	         f o r ( i   =   h i s t _ a r r _ s i z e   -   2 0 0 ;   i   <   h i s t _ a r r _ s i z e ;   i + + )   {  
  
 	 	 h i s t _ a r r [ i ]   =   m a l l o c ( 2 5 6 ) ;  
 	 	 i f ( h i s t _ a r r [ i ]   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
       	         }          
 	 } 	  
  
 	 / / P u t   e v e r y   p a r t   s t r i n g   o f   t h e   u s e r   i n p u t   i n t o   a   s t r i n g   a r r a y  
 	 s t r u c t   s t r u c _ c o m m a n d s   x ;  
 	 x   =   c o m m a n d _ l i s t ( c o m m a n d ) ;  
  
 	 / / S a v i n g   t h e   u s e d   c o m m a n d   f o r   h i s t o r y   ( i f   e n t r y   w a s   n o t   e m p t y )  
 	 i f ( x . s i z e   >   0 )   {  
  
 	         s t r c p y ( h i s t _ a r r [ h i s t _ c o u n t e r ] ,   c o m m a n d ) ;  
 	         h i s t _ c o u n t e r + + ;  
 	 } 	  
  
 	 i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " d a t e " )   = =   0   & &   ( x . s i z e   = =   1   | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) ) )   {  
                  
       	         	 t i m e _ t   d a t e   =   t i m e ( N U L L ) ;  
 	         	 s t r u c t   t m   * d a t e _ s t r u c t   =   l o c a l t i m e ( & d a t e ) ;  
 	         	 c h a r   d a t e _ c h a r [ 1 0 0 ] ;  
 	         	 s t r f t i m e ( d a t e _ c h a r ,   1 0 0 ,   " % a   % b   % d   % X   % Y " ,   d a t e _ s t r u c t ) ;  
 	         	 i f ( x . s i z e   = =   1 )   p r i n t f ( " % s \ n " ,   d a t e _ c h a r ) ;  
 	                 e l s e   i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ 3 ] ,   d a t e _ c h a r )   = =   1 )   p r i n t f ( " % s \ n " ,   d a t e _ c h a r ) ;  
 	 }  
  
 	 / / C h e c k   i f   t h e   a r g u m e n t s   w e r e   c o r r e c t  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " d a t e " )   = =   0   & &   ! ( x . s i z e   = =   1   | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) ) )   {  
  
 	         i f ( x . s i z e   >   2   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ; 	          
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   x . s i z e   ! =   4 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   ! =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;          
 	 }  
 	 e l s e   i f ( x . s i z e   = =   1   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " e x i t " )   = =   0 )   b o o l e a n   =   0 ;  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " e x i t " )   = =   0   & &   x . s i z e   ! =   1 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
                 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " e c h o " )   = =   0 )   {  
 	          
 	         i n t   i ;  
 	         / / C h e c k   f o r   p i p e l i n e   s y m b o l  
 	         f o r ( i   =   1 ;   i   <   x . s i z e   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i ] ,   " | " )   ! =   0 ;   i + + ) ; 	  
  
 	         / / I f   n o   p i p e l i n e   s y m b o l   i s   f o u n d   " i "   w o u l d   b e   v a l u e d   w i t h   x . s i z e ,   w h i c h   i s   o u t   o f   t h e   p a r t _ s t r i n g   a r r a y  
 	         i f ( i   = =   x . s i z e )   i - - ;  
  
 	         i f ( i   = =   x . s i z e   -   3   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i + 1 ] ,   " g r e p " )   = =   0 )   {  
  
 	 	 c h a r   e c h o _ s t r i n g [ 2 5 6 ] ;  
 	 	 s t r c p y ( e c h o _ s t r i n g ,   x . p a r t _ s t r i n g s [ 1 ] ) ;  
  
 	 	 i n t   j ;  
  
 	 	 / / F o r m   a   s t r i n g   t h a t   c o n t a i n s   t h e   e c h o   o u t p u t  
 	 	 f o r ( j   =   2 ;   j   <   i ;   j + + )   s t r c a t ( s t r c a t ( e c h o _ s t r i n g ,   "   " ) ,   x . p a r t _ s t r i n g s [ j ] ) ;  
  
 	 	 i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ i + 2 ] ,   e c h o _ s t r i n g )   = =   1 )   p r i n t f ( " % s \ n " ,   e c h o _ s t r i n g ) ;  
 	         }  
 	         e l s e   i f ( i   <   x . s i z e   -   1   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i + 1 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ;  
 	         e l s e   i f ( i   ! =   x . s i z e   -   3   & &   s t r c m p ( x . p a r t _ s t r i n g s [ i ] ,   " | " )   = =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   {  
  
 	                 f o r ( i   =   1 ;   i   <   x . s i z e ;   i + + )   {  
  
 	 	         p r i n t f ( " % s " ,   x . p a r t _ s t r i n g s [ i ] ) ;  
 	 	         i f ( i   <   x . s i z e - 1 )   p r i n t f ( "   " ) ;  
   	 	 }  
 	                 p r i n t f ( " \ n " ) ;          
 	         }  
 	 }  
                 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " l s " )   = =   0   & &   ( x . s i z e   = =   1   | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) ) )   {  
 	  
 	         D I R   * d i r _ a d d r e s s ;  
  
 	         c h a r   c u r _ d i r [ P A T H _ M A X ] ;  
 	         g e t c w d ( c u r _ d i r ,   P A T H _ M A X ) ;  
  
 	         i f ( ( d i r _ a d d r e s s   =   o p e n d i r ( c u r _ d i r ) )   ! =   N U L L )   {  
  
 	 	 s t r u c t   d i r e n t   * s t r u c _ p o i n t e r ;  
 	 	 w h i l e ( ( s t r u c _ p o i n t e r   =   r e a d d i r ( d i r _ a d d r e s s ) )   ! =   N U L L )   {  
  
 	 	         / / F i l t e r   ' . '   s y m b o l   f o r   c u r r e n t   d i r e c t o r y ,   " . . "   f o r   o n e   d i r e c t o r y   l e v e l   h i g h e r   a n d   h i d d e n   f i l e s  
 	 	         i f ( s t r c m p ( ( * s t r u c _ p o i n t e r ) . d _ n a m e ,   " . " )   ! =   0   & &   s t r c m p ( ( * s t r u c _ p o i n t e r ) . d _ n a m e ,   " . . " )   ! =   0   & &   ( * s t r u c _ p o i n t e r ) . d _ n a m e [ 0 ]   ! =   ' . ' )   {  
 	 	  
 	 	 	 i f ( x . s i z e   = =   1 )   p r i n t f ( " % s \ n " ,   ( * s t r u c _ p o i n t e r ) . d _ n a m e ) ;  
 	 	 	 e l s e   i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ 3 ] ,   ( * s t r u c _ p o i n t e r ) . d _ n a m e )   = =   1 )   p r i n t f ( " % s \ n " ,   ( * s t r u c _ p o i n t e r ) . d _ n a m e ) ;  
 	 	         }  
 	 	 }  
 	         }  
 	         c l o s e d i r ( d i r _ a d d r e s s ) ;  
 	 }  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " l s " )   = =   0   & &   ! ( x . s i z e   = =   1   | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) ) )   {  
  
 	         i f ( x . s i z e   >   2   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ; 	          
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   x . s i z e   ! =   4 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   ! =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ; 	  
 	 }  
 	 e l s e   i f ( x . s i z e   = =   2   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " c d " )   = =   0 )   {  
  
 	         i f ( c h d i r ( x . p a r t _ s t r i n g s [ 1 ] )   = =   - 1 )   p r i n t f ( " n o   s u c h   f i l e   o r   d i r e c t o r y \ n " ) ;  
 	 }  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " c d " )   = =   0   & &   x . s i z e   ! =   2 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " g r e p " )   = =   0   & &   ( x . s i z e   = =   3   | |   ( x . s i z e   = =   6   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 4 ] ,   " g r e p " )   = =   0 ) ) )   {  
 	  
 	         F I L E   * f i l e _ t o _ c h e c k ;  
 	         f i l e _ t o _ c h e c k   =   f o p e n ( x . p a r t _ s t r i n g s [ 2 ] ,   " r " ) ;  
 	         i f ( f i l e _ t o _ c h e c k   = =   N U L L )   p r i n t f ( " n o   s u c h   f i l e   o r   d i r e c t o r y \ n " ) ;  
 	          
 	         e l s e   {  
  
 	                 i n t   l i n e _ c o u n t e r   =   0 ;  
 	  
 	 	 / / C o u n t i n g   t h e   a m o u n t   o f   l i n e s   a n d   c o l u m n s   t h a t   n e e d   m e m o r y   t o   b e   a l l o c a t e d  
 	 	 f p o s _ t   b e g i n n i n g _ o f _ l i n e ;  
                                
 	 	 i n t   l i n e _ l e n g t h ;    
 	 	 i n t   c o l u m n _ l e n g t h   =   0 ;  
 	 	 i n t   r e a d _ c h a r a c t e r ;  
  
 	 	 w h i l e ( f e o f ( f i l e _ t o _ c h e c k )   = =   0 )   {  
  
 	 	         f g e t p o s ( f i l e _ t o _ c h e c k ,   & b e g i n n i n g _ o f _ l i n e ) ;  
  
 	 	         / / 2   l e n g t h   e x t r a   f o r   \ n   a n d   \ 0  
 	 	         l i n e _ l e n g t h   =   2 ;  
 	               	         w h i l e ( ( r e a d _ c h a r a c t e r   =   f g e t c ( f i l e _ t o _ c h e c k ) )   ! =   ' \ n '   & &   r e a d _ c h a r a c t e r   ! =   E O F )   l i n e _ l e n g t h + + ;  
 	 	         f s e t p o s ( f i l e _ t o _ c h e c k ,   & b e g i n n i n g _ o f _ l i n e ) ;  
  
 	   	         c h a r   * f i l e _ l i n e   =   m a l l o c ( l i n e _ l e n g t h ) ;  
 	 	  
 	 	         i f ( f g e t s ( f i l e _ l i n e ,   l i n e _ l e n g t h ,   f i l e _ t o _ c h e c k )   ! =   N U L L   & &   s t r s t r ( f i l e _ l i n e ,   x . p a r t _ s t r i n g s [ 1 ] )   ! =   N U L L )   c o l u m n _ l e n g t h + + ;  
  
 	 	         f r e e ( f i l e _ l i n e ) ;  
 	 	 }  
  
 	 	 r e w i n d ( f i l e _ t o _ c h e c k ) ;  
  
 	                 c h a r   * * p a t t e r n _ c o n t a i n e d _ a r r   =   m a l l o c ( c o l u m n _ l e n g t h   *   s i z e o f ( c h a r   * ) ) ;  
 	                 i f ( p a t t e r n _ c o n t a i n e d _ a r r   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ; 	  
  
 	 	 w h i l e ( f e o f ( f i l e _ t o _ c h e c k )   = =   0 )   {  
  
 	 	         f g e t p o s ( f i l e _ t o _ c h e c k ,   & b e g i n n i n g _ o f _ l i n e ) ;  
  
 	 	         / / 2   l e n g t h   e x t r a   f o r   \ n   a n d   \ 0  
 	 	         l i n e _ l e n g t h   =   2 ;  
 	               	         w h i l e ( ( r e a d _ c h a r a c t e r   =   f g e t c ( f i l e _ t o _ c h e c k ) )   ! =   ' \ n '   & &   r e a d _ c h a r a c t e r   ! =   E O F )   l i n e _ l e n g t h + + ;  
  
 	 	         f s e t p o s ( f i l e _ t o _ c h e c k ,   & b e g i n n i n g _ o f _ l i n e ) ;  
  
 	   	         c h a r   * f i l e _ l i n e   =   m a l l o c ( l i n e _ l e n g t h ) ;  
  
 	 	         i f ( f g e t s ( f i l e _ l i n e ,   l i n e _ l e n g t h ,   f i l e _ t o _ c h e c k )   ! =   N U L L   & &   s t r s t r ( f i l e _ l i n e ,   x . p a r t _ s t r i n g s [ 1 ] )   ! =   N U L L )   {  
 	 	  
 	 	 	 p a t t e r n _ c o n t a i n e d _ a r r [ l i n e _ c o u n t e r ]   =   m a l l o c ( l i n e _ l e n g t h ) ;  
 	 	 	 i f ( p a t t e r n _ c o n t a i n e d _ a r r [ l i n e _ c o u n t e r ]   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
 	 	 	 s t r c p y ( p a t t e r n _ c o n t a i n e d _ a r r [ l i n e _ c o u n t e r ] ,   f i l e _ l i n e ) ;  
 	 	 	 l i n e _ c o u n t e r + + ;  
 	 	         }  
 	  
 	 	         f r e e ( f i l e _ l i n e ) ;  
                 	 }  
  
 	 	 / / N o r m a l   g r e p   u s e  
 	 	 i f ( x . s i z e   = =   3 )   {  
  
 	 	         i n t   i ;  
 	 	         f o r ( i   =   0 ;   i   <   c o l u m n _ l e n g t h ;   i + + )   p r i n t f ( " % s " ,   p a t t e r n _ c o n t a i n e d _ a r r [ i ] ) ;  
 	 	 }  
  
 	 	 / / G r e p   p i p e d   w i t h   g r e p  
 	 	 e l s e   {  
  
 	 	         i n t   i ;  
 	 	         f o r ( i   =   0 ;   i   <   c o l u m n _ l e n g t h ;   i + + )   i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ 5 ] ,   p a t t e r n _ c o n t a i n e d _ a r r [ i ] )   = =   1 )   p r i n t f ( " % s " ,   p a t t e r n _ c o n t a i n e d _ a r r [ i ] ) ;  
 	 	 }  
  
 	                 / / F r e e i n g   t h e   a r r a y  
 	                 f o r ( i   =   0 ;   i   <   c o l u m n _ l e n g t h ;   i + + )   f r e e ( p a t t e r n _ c o n t a i n e d _ a r r [ i ] ) ;  
 	                 f r e e ( p a t t e r n _ c o n t a i n e d _ a r r ) ;  
  
 	 	 f c l o s e ( f i l e _ t o _ c h e c k ) ;  
 	         }    
 	 }  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " g r e p " )   = =   0   & &   ! ( x . s i z e   = =   3   | |   ( x . s i z e   = =   6   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 4 ] ,   " g r e p " )   = =   0 ) ) )   {  
  
 	         i f ( x . s i z e   >   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 4 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ; 	          
 	         e l s e   i f ( x . s i z e   >   3   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " | " )   = =   0   & &   x . s i z e   ! =   6 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   i f ( ( x . s i z e   >   3   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " | " )   ! =   0 )   | |   x . s i z e   <   3 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ; 	  
 	 }  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " h i s t o r y " )   = =   0   & &   ( ( x . s i z e   = =   1     | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) )    
 	 	 	 	 	 	                       | |   ( x . s i z e   = =   2     | |   ( x . s i z e   = =   5   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " g r e p " )   = =   0 ) ) ) )   {    
  
 	         / / h i s t o r y  
 	         i f ( x . s i z e   = =   1 )   {  
 	  
 	 	 i n t   i ;  
 	 	 f o r ( i   =   0 ;   i   <   h i s t _ c o u n t e r ;   i + + )   p r i n t f ( " % d   % s \ n " ,   i ,   h i s t _ a r r [ i ] ) ; 	   	  
 	         }  
  
 	         / / h i s t o r y   n   o r   h i s t o r y   - c  
 	         i f ( x . s i z e   = =   2   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   i f ( x . s i z e   = =   2 )   {  
  
 	 	 i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " - c " )   ! =   0   & &   a t o i ( x . p a r t _ s t r i n g s [ 1 ] )   >   0 )   {  
  
 	 	         i n t   b e g i n n i n g   =   h i s t _ c o u n t e r   -   a t o i ( x . p a r t _ s t r i n g s [ 1 ] ) ;  
  
 	 	         / / I f   t h e   a m o u n t   o f   c o m m a n d s   y o u   w a n t   t o   k n o w   f r o m   t h e   h i s t o r y   i s   b i g g e r   t h a n   t h e   a c t u a l   a m o u n t   o f   c o m m a n d s    
 	 	         / / s a v e d   i n   h i s t o r y ,   t h e   p r o g r a m   w i l l   s i m p l y   s t a r t   w i t h   t h e   f i r s t   e n t r y  
 	 	         i f ( b e g i n n i n g   <   0 )   b e g i n n i n g   =   0 ;  
 	         	         f o r ( i   =   b e g i n n i n g ;   i   <   h i s t _ c o u n t e r ;   i + + )   p r i n t f ( " % d   % s \ n " ,   i ,   h i s t _ a r r [ i ] ) ;  
 	 	 }  
 	 	 e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " - c " )   ! =   0   & &   a t o i ( x . p a r t _ s t r i n g s [ 1 ] )   < =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	 	 e l s e   {  
  
 	 	         / / R e d u c i n g   t h e   a l l o c a t e d   m e m o r y   f o r   h i s t o r y   b a c k   t o   t h e   s t a n d a r d   s i z e   1 2 0 0  
 	 	         i n t   h i s t _ a r r _ s i z e _ o l d   =   h i s t _ a r r _ s i z e ;  
 	 	         h i s t _ a r r _ s i z e   =   1 2 0 0 ;  
  
 	 	         i n t   i ;  
 	 	         f o r ( i   =   h i s t _ a r r _ s i z e ;   i   <   h i s t _ a r r _ s i z e _ o l d ;   i + + )   f r e e ( h i s t _ a r r [ i ] ) ;  
  
 	   	         h i s t _ a r r _ t e s t   =   r e a l l o c ( h i s t _ a r r ,   h i s t _ a r r _ s i z e   *   s i z e o f ( c h a r   * ) ) ;  
                                         i f ( h i s t _ a r r   = =   N U L L )   p r i n t f ( " O u t   o f   m e m o r y \ n " ) ;  
 	   	         e l s e   h i s t _ a r r   =   h i s t _ a r r _ t e s t ;  
  
 	 	         h i s t _ c o u n t e r   =   0 ;    
 	 	 }       	 	        
 	         }  
  
 	         / / g r e p   f o r   h i s t o r y  
 	         e l s e   i f ( x . s i z e   = =   4 )   {  
  
 	 	 i n t   i ;  
 	 	 f o r ( i   =   0 ;   i   <   h i s t _ c o u n t e r ;   i + + )   i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ 3 ] ,   h i s t _ a r r [ i ] )   = =   1 )   p r i n t f ( " % d   % s \ n " ,   i + 1 ,   h i s t _ a r r [ i ] ) ; 	  
 	         }  
  
 	         / / g r e p   f o r   h i s t o r y   n  
 	         e l s e   i f ( x . s i z e   = =   5 )   {  
  
 	 	 i n t   b e g i n n i n g   =   h i s t _ c o u n t e r   -   a t o i ( x . p a r t _ s t r i n g s [ 1 ] ) ;  
 	 	 i n t   i ;  
 	 	 f o r ( i   =   b e g i n n i n g ;   i   <   h i s t _ c o u n t e r ;   i + + )   i f ( g r e p _ l i n e ( x . p a r t _ s t r i n g s [ 4 ] ,   h i s t _ a r r [ i ] )   = =   1 )   p r i n t f ( " % d   % s \ n " ,   i + 1 - b e g i n n i n g ,   h i s t _ a r r [ i ] ) ; 	  
 	         }  
 	 }  
 	 e l s e   i f ( x . s i z e   >   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 0 ] ,   " h i s t o r y " )   = =   0   & &   ! ( ( x . s i z e   = =   1     | |   ( x . s i z e   = =   4   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   = =   0 ) )    
 	 	 	 	 	 	                         | |   ( x . s i z e   = =   2     | |   ( x . s i z e   = =   5   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " g r e p " )   = =   0 ) ) ) )   {  
  
 	         / / h i s t o r y  
 	         i f ( x . s i z e   >   2   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ; 	          
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 1 ] ,   " | " )   = =   0   & &   x . s i z e   ! =   4 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ; 	    
  
 	         / / h i s t o r y   n  
 	         e l s e   i f ( x . s i z e   >   3   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " | " )   = =   0   & &   s t r c m p ( x . p a r t _ s t r i n g s [ 3 ] ,   " g r e p " )   ! =   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ; 	          
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " | " )   = =   0   & &   x . s i z e   ! =   5 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ;  
 	         e l s e   i f ( s t r c m p ( x . p a r t _ s t r i n g s [ 2 ] ,   " | " )   ! =   0 )   p r i n t f ( " i n v a l i d   a r g u m e n t s \ n " ) ; 	       	    
 	 }  
 	 e l s e   i f ( x . s i z e   >   0 )   p r i n t f ( " c o m m a n d   n o t   f o u n d \ n " ) ;  
         }  
  
         / / S a v i n g   h i s t o r y   i n   f i l e   . h h u s h . h i s t f i l e  
         c h d i r ( h h u s h _ d i r e c t o r y ) ;  
  
         h i s t o r y _ f i l e   =   f o p e n ( " . h h u s h . h i s t f i l e " ,   " w + " ) ;  
         i f ( h i s t o r y _ f i l e   ! =   N U L L )   {  
  
 	 i n t   i   =   0 ;  
 	 w h i l e ( i   <   h i s t _ c o u n t e r   & &   i   <   1 0 0 0 )   {  
  
                         f p u t s ( h i s t _ a r r [ i ] ,   h i s t o r y _ f i l e ) ;  
 	         f p u t s ( " \ n " ,   h i s t o r y _ f i l e ) ; 	  
 	         i + + ;          
 	 }  
 	 f c l o s e ( h i s t o r y _ f i l e ) ;  
         }  
         e l s e   p r i n t f ( " H i s t o r y   c o u l d   n o t   b e   s a v e d " ) ;  
          
  
         / / F r e e i n g   t h e   a r r a y   t h a t   i s   u s e d   f o r   h i s t o r y  
         f o r ( i   =   0 ;   i   <   h i s t _ a r r _ s i z e ;   i + + )   f r e e ( h i s t _ a r r [ i ] ) ;  
         f r e e ( h i s t _ a r r ) ;  
  
         r e t u r n   0 ;  
 } 