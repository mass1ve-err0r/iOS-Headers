//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface ARFaceData : NSObject <NSSecureCoding>
{
    _Bool _mirrored;
    NSArray *_detectedFaces;
    NSDictionary *_faceMeshPayload;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(retain, nonatomic) NSDictionary *faceMeshPayload; // @synthesize faceMeshPayload=_faceMeshPayload;
@property(retain, nonatomic) NSArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataObjects:(id)arg1 mirroredVideoInput:(_Bool)arg2 stripDetectionData:(_Bool)arg3;
- (id)init;

@end

