/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class CALayer, NSString, TPRevealingRingView, UIColor;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
    TPRevealingRingView *_revealingRingView;
    unsigned int character;
}

@property double alphaOutsideAndInsideRing;
@property unsigned int character;
@property(retain) UIColor * color;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) CALayer * glyphLayer;
@property(readonly) unsigned long long hash;
@property(retain) CALayer * highlightedGlyphLayer;
@property(readonly) TPRevealingRingView * revealingRingView;
@property(readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (double)highlightCrossfadeHighlightBeginTime;
+ (double)highlightCrossfadeHighlightFadeDuration;
+ (double)highlightCrossfadeNormalBeginTime;
+ (double)highlightCrossfadeNormalFadeDuration;
+ (double)horizontalPadding;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(bool)arg2 whiteVersion:(bool)arg3;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(bool)arg2;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;
+ (double)unhighlightCrossfadeHighlightBeginTime;
+ (double)unhighlightCrossfadeHighlightFadeDuration;
+ (double)unhighlightCrossfadeNormalBeginTime;
+ (double)unhighlightCrossfadeNormalFadeDuration;
+ (bool)usesBoldAssets;
+ (bool)usesTelephonyGlyphsWhereAvailable;
+ (double)verticalPadding;

- (double)alphaOutsideAndInsideRing;
- (unsigned int)character;
- (id)color;
- (void)dealloc;
- (id)defaultColor;
- (id)glyphLayer;
- (id)highlightedGlyphLayer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initForCharacter:(unsigned int)arg1;
- (id)revealingRingView;
- (void)setAlphaOutsideAndInsideRing:(double)arg1;
- (void)setCharacter:(unsigned int)arg1;
- (void)setColor:(id)arg1;
- (void)setGlyphLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedGlyphLayer:(id)arg1;
- (void)setUsesColorBurnBlending;
- (void)setUsesColorDodgeBlending;
- (void)touchCancelled;
- (void)touchDown;
- (void)touchUp;

@end