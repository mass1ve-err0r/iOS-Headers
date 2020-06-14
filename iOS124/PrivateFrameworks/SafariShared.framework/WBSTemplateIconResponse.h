//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataResponse.h>

@class UIColor, UIImage;

@interface WBSTemplateIconResponse : WBSSiteMetadataResponse
{
    _Bool _monogram;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIColor *_themeColor;
}

+ (id)responseWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(_Bool)arg5;
@property(readonly, nonatomic, getter=isMonogram) _Bool monogram; // @synthesize monogram=_monogram;
@property(readonly, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(readonly, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 image:(id)arg2 highlightedImage:(id)arg3 themeColor:(id)arg4 isMonogram:(_Bool)arg5;
- (id)initWithURL:(id)arg1;

@end

