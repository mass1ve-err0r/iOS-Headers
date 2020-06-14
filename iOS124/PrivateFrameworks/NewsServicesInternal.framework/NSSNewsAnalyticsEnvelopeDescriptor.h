//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSCopying-Protocol.h>

@interface NSSNewsAnalyticsEnvelopeDescriptor : NSObject <NSCopying>
{
    int _contentType;
    int _contentTypeVersion;
    int _contentTypeMinorVersion;
    int _contentTypePatchVersion;
}

@property(readonly, nonatomic) int contentTypePatchVersion; // @synthesize contentTypePatchVersion=_contentTypePatchVersion;
@property(readonly, nonatomic) int contentTypeMinorVersion; // @synthesize contentTypeMinorVersion=_contentTypeMinorVersion;
@property(readonly, nonatomic) int contentTypeVersion; // @synthesize contentTypeVersion=_contentTypeVersion;
@property(readonly, nonatomic) int contentType; // @synthesize contentType=_contentType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentType:(int)arg1 contentTypeVersion:(int)arg2 contentTypeMinorVersion:(int)arg3 contentTypePatchVersion:(int)arg4;
- (id)init;

@end

