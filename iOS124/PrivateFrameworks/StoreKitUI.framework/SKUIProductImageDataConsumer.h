//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIImageDataConsumer.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <NSCopying>
{
    UIColor *_backgroundColor;
    struct CGSize _iconSize;
    SKUIColorScheme *_colorScheme;
}

+ (id)wishlistConsumer;
+ (id)smartBannerConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemeConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposeConsumer;
+ (id)swooshConsumer;
+ (id)productPageConsumer;
+ (id)purchasedConsumer;
+ (id)updatesConsumer;
+ (id)chartsConsumer;
+ (id)cardConsumer;
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;
+ (id)gridConsumer;
+ (id)consumerWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;
- (id)imageForColor:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;

@end

