//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreNFC/NSSecureCoding-Protocol.h>

@class NSArray;

@interface NFCNDEFMessage : NSObject <NSSecureCoding>
{
    NSArray *_records;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *records; // @synthesize records=_records;
- (id)description;
- (void)dealloc;
- (id)initWithEmptyNdefMessage;
- (id)initWithNFNdefMessage:(id)arg1;
- (id)initWithNDEFRecords:(id)arg1;
- (id)initWithNDEFPayloads:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
