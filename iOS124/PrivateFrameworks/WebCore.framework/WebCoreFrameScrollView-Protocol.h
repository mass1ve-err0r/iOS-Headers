//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol WebCoreFrameScrollView
- (struct CGPoint)scrollOrigin;
- (void)setScrollOrigin:(struct CGPoint)arg1 updatePositionAtAll:(_Bool)arg2 immediately:(_Bool)arg3;
- (void)setScrollBarsSuppressed:(_Bool)arg1 repaintOnUnsuppress:(_Bool)arg2;
- (void)scrollingModes:(int *)arg1 vertical:(int *)arg2;
- (void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(_Bool)arg3;
@end

