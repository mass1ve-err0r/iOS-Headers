//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpotlight/CSSearchableIndex.h>

@interface MDSearchableIndex : CSSearchableIndex
{
}

+ (id)sharedInstance;
- (void)performIndexJob:(id)arg1;
- (void)performIndexJob:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)indexSearchableItems:(id)arg1 stateInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

