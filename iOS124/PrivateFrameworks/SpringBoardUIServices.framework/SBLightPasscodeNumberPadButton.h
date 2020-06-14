//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPadLightStyleButton.h>

#import <SpringBoardUIServices/SBUIPasscodeNumberPadButton-Protocol.h>

@class NSString, UIColor;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>
{
    UIColor *_reduceTransparencyButtonColor;
}

+ (double)highlightedCircleViewAlpha;
+ (double)unhighlightedCircleViewAlpha;
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
- (void).cxx_destruct;
- (id)stringCharacter;
- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

