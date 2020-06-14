//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSAnalyzedImageColors-Protocol.h>

@class SKUIJSColor;

@interface SKUIJSAnalyzedImageColors : IKJSObject <SKUIJSAnalyzedImageColors>
{
    SKUIJSColor *_backgroundColor;
    SKUIJSColor *_textPrimaryColor;
    SKUIJSColor *_textSecondaryColor;
    _Bool _isBackgroundLight;
}

@property(readonly, nonatomic) _Bool isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(readonly, nonatomic) SKUIJSColor *textSecondaryColor; // @synthesize textSecondaryColor=_textSecondaryColor;
@property(readonly, nonatomic) SKUIJSColor *textPrimaryColor; // @synthesize textPrimaryColor=_textPrimaryColor;
@property(readonly, nonatomic) SKUIJSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;

@end

