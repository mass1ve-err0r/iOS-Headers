//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLPremiumHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes
{
    double _shadowRadius;
    double _shadowOpacity;
    struct CGSize _shadowOffset;
}

@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2;
- (id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1;

@end

