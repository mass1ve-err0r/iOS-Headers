//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class NSData;

@interface _CNImageDataDonationValue : CNDonationValue
{
    NSData *_imageData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)initWithImageData:(id)arg1 origin:(id)arg2;

@end

