//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSArray, NSString;

@interface PKAccountPhysicalCardStatusUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    unsigned long long _reason;
    NSArray *_updatedPhysicalCards;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *updatedPhysicalCards; // @synthesize updatedPhysicalCards=_updatedPhysicalCards;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

