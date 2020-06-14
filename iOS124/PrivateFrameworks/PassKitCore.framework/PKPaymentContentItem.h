//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSURLRequest;

@interface PKPaymentContentItem : NSObject <NSSecureCoding>
{
    NSURLRequest *_imageRequest;
    struct CGImage *_image;
    NSAttributedString *_title;
    NSAttributedString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSAttributedString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(nonatomic) struct CGImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSURLRequest *imageRequest; // @synthesize imageRequest=_imageRequest;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqualToPaymentContentItem:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

