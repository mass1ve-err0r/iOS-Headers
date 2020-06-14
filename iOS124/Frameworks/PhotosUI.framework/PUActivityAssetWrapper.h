//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSString;

@interface PUActivityAssetWrapper : NSObject <NSSecureCoding>
{
    NSString *_assetLocalIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAsset:(id)arg1;

@end

