//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDiscoveryShelfView.h>

@class NSString, UILabel;

@interface PKDiscoveryInlineMediaCaptionView : PKDiscoveryShelfView
{
    UILabel *_captionLabel;
    NSString *_captionText;
}

- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithCaptionText:(id)arg1;

@end

