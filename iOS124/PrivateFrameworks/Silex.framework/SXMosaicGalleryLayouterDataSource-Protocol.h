//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXColumnLayout, SXMosaicGalleryLayouter, UIView;

@protocol SXMosaicGalleryLayouterDataSource <NSObject>
- (SXColumnLayout *)documentColumnLayoutForGalleryLayouter:(SXMosaicGalleryLayouter *)arg1;
- (_Bool)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 viewIsCurrentlyFullscreenForItemAtIndex:(unsigned long long)arg2;
- (UIView *)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 viewForItemAtIndex:(unsigned long long)arg2;
- (struct CGSize)galleryLayouter:(SXMosaicGalleryLayouter *)arg1 dimensionsForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForGalleryLayouter:(SXMosaicGalleryLayouter *)arg1;
@end

