//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PKPaymentHeroImageModel : NSObject
{
    NSURL *_url;
    NSString *_imageSha;
}

@property(readonly, nonatomic) NSString *imageSha; // @synthesize imageSha=_imageSha;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

