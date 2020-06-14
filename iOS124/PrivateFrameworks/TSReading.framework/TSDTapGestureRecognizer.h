//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer
{
    struct CGPoint mFirstTapLocation;
    _Bool mSavedFirstTapLocation;
    unsigned long long mTapCount;
}

@property(readonly, nonatomic) unsigned long long tapCount; // @synthesize tapCount=mTapCount;
@property(readonly, nonatomic) struct CGPoint firstTapLocation; // @synthesize firstTapLocation=mFirstTapLocation;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

