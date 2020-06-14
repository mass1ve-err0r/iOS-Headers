//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISScrollViewVitalityController.h>

#import <PhotosPlayer/UIScrollViewDelegate-Protocol.h>

@class ISUIVisibilityOffsetHelper, NSString, UIScrollView;

@interface ISUIScrollViewVitalityController : ISScrollViewVitalityController <UIScrollViewDelegate>
{
    ISUIVisibilityOffsetHelper *_visibilityOffsetHelper;
    UIScrollView *__scrollView;
}

@property(nonatomic, setter=_setScrollView:) __weak UIScrollView *_scrollView; // @synthesize _scrollView=__scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_reduceMotionDidChange:(id)arg1;
- (_Bool)canPerformVitality;
- (id)visibilityOffsetHelper;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

