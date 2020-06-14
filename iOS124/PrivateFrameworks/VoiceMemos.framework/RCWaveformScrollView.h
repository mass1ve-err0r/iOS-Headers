//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

__attribute__((visibility("hidden")))
@interface RCWaveformScrollView : UIScrollView
{
    unsigned long long _ignoreContentOffsetChangesCount;
}

- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2 usingCurrentAnimatedPosition:(_Bool)arg3;
- (struct CGPoint)contentOffsetInPresentationLayer:(_Bool)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)endIgnoringContentOffsetChanges;
- (void)beginIgnoringContentOffsetChanges;

@end

