//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGMoodSourceSceneIdentifier : NSObject
{
    _Bool _isDistributed;
    _Bool _isHighConfidence;
    NSString *_moodIdentifier;
}

@property _Bool isHighConfidence; // @synthesize isHighConfidence=_isHighConfidence;
@property _Bool isDistributed; // @synthesize isDistributed=_isDistributed;
@property(retain) NSString *moodIdentifier; // @synthesize moodIdentifier=_moodIdentifier;
- (void).cxx_destruct;

@end

