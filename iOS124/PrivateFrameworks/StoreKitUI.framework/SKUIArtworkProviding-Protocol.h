//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSObject-Protocol.h>
#import <StoreKitUI/NSSecureCoding-Protocol.h>
#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSURL, SKUIArtwork;

@protocol SKUIArtworkProviding <NSObject, NSSecureCoding, SKUICacheCoding, NSCopying>
+ (_Bool)canHandleArtworkFormat:(id)arg1;
@property(readonly, nonatomic) SKUIArtwork *smallestArtwork;
@property(readonly, nonatomic) SKUIArtwork *largestArtwork;
- (_Bool)hasArtwork;
- (SKUIArtwork *)preferredExactArtworkForSize:(struct CGSize)arg1;
- (SKUIArtwork *)bestArtworkForScaledSize:(struct CGSize)arg1;
- (SKUIArtwork *)bestArtworkForSize:(struct CGSize)arg1;
- (SKUIArtwork *)artworkWithWidth:(long long)arg1;
- (NSURL *)artworkURLForSize:(long long)arg1;
- (SKUIArtwork *)artworkForSize:(long long)arg1;
@end

