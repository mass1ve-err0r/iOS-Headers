//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKGameInternal.h>

@class NSString;

@interface GKGameRecommendationInternal : GKGameInternal
{
    NSString *_reason;
    NSString *_engineID;
}

+ (id)secureCodedPropertyKeys;
@property(retain, nonatomic) NSString *engineID; // @synthesize engineID=_engineID;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)serverRepresentation;
- (void)dealloc;
- (id)initWithGame:(id)arg1;

@end

