//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDTimeNode.h>

@class PDAnimationTarget;

__attribute__((visibility("hidden")))
@interface PDMediaNode : PDTimeNode
{
    PDAnimationTarget *mTarget;
    _Bool mIsMuted;
    _Bool mIsShowWhenStopped;
    long long mNumberOfSlides;
    long long mVolume;
}

- (void)setVolume:(long long)arg1;
- (long long)volume;
- (void)setNumberOfSlides:(long long)arg1;
- (long long)numberOfSlides;
- (void)setIsShowWhenStopped:(_Bool)arg1;
- (_Bool)isShowWhenStopped;
- (void)setIsMuted:(_Bool)arg1;
- (_Bool)isMuted;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)dealloc;
- (id)init;

@end

