//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class UICollectionViewCell, _TVCarouselView;

@protocol TVCarouselViewDataSource <NSObject>
- (UICollectionViewCell *)carouselView:(_TVCarouselView *)arg1 cellForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInCarouselView:(_TVCarouselView *)arg1;
@end

