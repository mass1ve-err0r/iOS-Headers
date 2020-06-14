//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromiseSeed.h>

#import <InstallCoordination/NSCopying-Protocol.h>
#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class NSURL;

@interface IXPromisedTransferToPathSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>
{
    _Bool _shouldCopy;
    _Bool _tryDeltaCopy;
    NSURL *_transferPath;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool tryDeltaCopy; // @synthesize tryDeltaCopy=_tryDeltaCopy;
@property(nonatomic) _Bool shouldCopy; // @synthesize shouldCopy=_shouldCopy;
@property(retain, nonatomic) NSURL *transferPath; // @synthesize transferPath=_transferPath;
- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

