//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKAttachment.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding>
{
    _Bool _renderOnClient;
    struct CGSize _imageSize;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool renderOnClient; // @synthesize renderOnClient=_renderOnClient;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

