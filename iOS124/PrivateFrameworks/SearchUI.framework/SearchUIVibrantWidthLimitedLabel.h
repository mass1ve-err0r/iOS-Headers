//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIVibrantLabel.h>

#import <SearchUI/SearchUIWidthLimitedView-Protocol.h>

@class NSString;

@interface SearchUIVibrantWidthLimitedLabel : SearchUIVibrantLabel <SearchUIWidthLimitedView>
{
    double width;
}

@property double width; // @synthesize width;
- (struct CGSize)originalFittingSizeForSize:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

