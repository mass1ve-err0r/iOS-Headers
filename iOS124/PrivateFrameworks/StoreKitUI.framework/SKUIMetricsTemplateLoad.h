//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSDictionary;

@interface SKUIMetricsTemplateLoad : NSObject <NSCopying>
{
    _Bool _responseWasCached;
    double _requestStartTime;
    double _responseStartTime;
    double _responseEndTime;
}

@property(nonatomic) _Bool responseWasCached; // @synthesize responseWasCached=_responseWasCached;
@property(nonatomic) double responseEndTime; // @synthesize responseEndTime=_responseEndTime;
@property(nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

