//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCTCapabilitiesState.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>
#import <TelephonyUtilities/TUPubliclyAccessibleCopying-Protocol.h>

@class NSSet, NSString;

@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>
{
    _Bool _approved;
    NSSet *_approvedSecondaryDeviceIDs;
    NSString *_localDeviceID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(copy, nonatomic) NSSet *approvedSecondaryDeviceIDs; // @synthesize approvedSecondaryDeviceIDs=_approvedSecondaryDeviceIDs;
@property(nonatomic, getter=isApproved) _Bool approved; // @synthesize approved=_approved;
- (void).cxx_destruct;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone *)arg1;
- (id)publiclyAccessibleCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

