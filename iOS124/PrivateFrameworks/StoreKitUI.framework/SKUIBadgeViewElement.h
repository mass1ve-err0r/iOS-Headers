//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSAttributedString, NSString, NSURL, UIImage;

@interface SKUIBadgeViewElement : SKUIViewElement
{
    UIImage *_fallbackImage;
    _Bool _hasValidFallbackImage;
    NSString *_resourceName;
    struct CGSize _size;
    NSString *_text;
    NSURL *_url;
}

@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *fallbackImage; // @synthesize fallbackImage=_fallbackImage;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)accessibilityText;
@property(readonly, nonatomic) long long badgeType;
@property(readonly, nonatomic) NSAttributedString *attributedString;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

