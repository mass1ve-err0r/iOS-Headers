//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSSiteMetadataRequest.h>

@class NSArray, NSString;

@interface WBSSVGImageRenderingRequest : WBSSiteMetadataRequest
{
}

@property(readonly, nonatomic) NSArray *urls;
@property(readonly, nonatomic) NSString *svgContent;
@property(readonly, nonatomic) struct CGSize imageSize;
- (id)_imageSizeValueWithSize:(struct CGSize)arg1;
- (id)initWithSVGContent:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithURLs:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithURL:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;

@end

