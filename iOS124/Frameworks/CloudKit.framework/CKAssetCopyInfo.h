//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface CKAssetCopyInfo : NSObject <NSSecureCoding>
{
    NSData *_fileSignature;
    NSData *_referenceSignature;
    NSData *_assetKey;
    NSURL *_assetURL;
    NSString *_senderID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *senderID; // @synthesize senderID=_senderID;
@property(copy, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(copy, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(copy, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(copy, nonatomic) NSData *fileSignature; // @synthesize fileSignature=_fileSignature;
- (void).cxx_destruct;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

