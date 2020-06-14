//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStoreUI/NSCopying-Protocol.h>
#import <iTunesStoreUI/NSSecureCoding-Protocol.h>

@class NSDictionary, SUGradient, UIColor;

@interface SUViewControllerScriptProperties : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _alwaysDispatchesScrollEvents;
    UIColor *_backgroundColor;
    NSDictionary *_contextDictionary;
    _Bool _doubleTapEnabled;
    _Bool _embedded;
    _Bool _flashesScrollIndicators;
    _Bool _inputViewObeysDOMFocus;
    long long _loadingIndicatorStyle;
    UIColor *_loadingTextColor;
    UIColor *_loadingTextShadowColor;
    SUGradient *_placeholderBackgroundGradient;
    struct UIEdgeInsets _scrollContentInsets;
    _Bool _scrollingDisabled;
    _Bool _shouldLoadProgressively;
    _Bool _shouldShowFormAccessory;
    _Bool _showsHorizontalScrollIndicator;
    _Bool _showsVerticalScrollIndicator;
    _Bool _showsBackgroundShadow;
    UIColor *_topExtensionColor;
    _Bool _usesBlurredBackground;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool usesBlurredBackground; // @synthesize usesBlurredBackground=_usesBlurredBackground;
@property(retain, nonatomic) UIColor *topExtensionColor; // @synthesize topExtensionColor=_topExtensionColor;
@property(nonatomic) _Bool showsBackgroundShadow; // @synthesize showsBackgroundShadow=_showsBackgroundShadow;
@property(nonatomic) _Bool showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;
@property(nonatomic) _Bool showsHorizontalScrollIndicator; // @synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator;
@property(nonatomic) _Bool shouldShowFormAccessory; // @synthesize shouldShowFormAccessory=_shouldShowFormAccessory;
@property(nonatomic) _Bool shouldLoadProgressively; // @synthesize shouldLoadProgressively=_shouldLoadProgressively;
@property(nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled; // @synthesize scrollingDisabled=_scrollingDisabled;
@property(nonatomic) struct UIEdgeInsets scrollContentInsets; // @synthesize scrollContentInsets=_scrollContentInsets;
@property(retain, nonatomic) SUGradient *placeholderBackgroundGradient; // @synthesize placeholderBackgroundGradient=_placeholderBackgroundGradient;
@property(retain, nonatomic) UIColor *loadingTextShadowColor; // @synthesize loadingTextShadowColor=_loadingTextShadowColor;
@property(retain, nonatomic) UIColor *loadingTextColor; // @synthesize loadingTextColor=_loadingTextColor;
@property(nonatomic) long long loadingIndicatorStyle; // @synthesize loadingIndicatorStyle=_loadingIndicatorStyle;
@property(nonatomic) _Bool inputViewObeysDOMFocus; // @synthesize inputViewObeysDOMFocus=_inputViewObeysDOMFocus;
@property(nonatomic) _Bool flashesScrollIndicators; // @synthesize flashesScrollIndicators=_flashesScrollIndicators;
@property(nonatomic, getter=isEmbedded) _Bool embedded; // @synthesize embedded=_embedded;
@property(nonatomic, getter=isDoubleTapEnabled) _Bool doubleTapEnabled; // @synthesize doubleTapEnabled=_doubleTapEnabled;
@property(copy, nonatomic) NSDictionary *contextDictionary; // @synthesize contextDictionary=_contextDictionary;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool alwaysDispatchesScrollEvents; // @synthesize alwaysDispatchesScrollEvents=_alwaysDispatchesScrollEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

