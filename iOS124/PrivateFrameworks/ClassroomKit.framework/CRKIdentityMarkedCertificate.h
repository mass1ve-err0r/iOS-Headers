//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSUUID;

@interface CRKIdentityMarkedCertificate : NSObject <NSSecureCoding>
{
    NSUUID *_keyPairMarker;
    NSData *_certificateData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSData *certificateData; // @synthesize certificateData=_certificateData;
@property(readonly, nonatomic) NSUUID *keyPairMarker; // @synthesize keyPairMarker=_keyPairMarker;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPairMarker:(id)arg1 certificateData:(id)arg2;

@end

