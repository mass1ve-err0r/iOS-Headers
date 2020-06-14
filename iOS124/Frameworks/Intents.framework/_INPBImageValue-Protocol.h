//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSData, NSString, _INPBValueMetadata;

@protocol _INPBImageValue <NSObject>
@property(nonatomic) _Bool hasWidth;
@property(nonatomic) double width;
@property(readonly, nonatomic) _Bool hasValueMetadata;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property(readonly, nonatomic) _Bool hasUri;
@property(copy, nonatomic) NSString *uri;
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type;
@property(readonly, nonatomic) _Bool hasProxyServiceIdentifier;
@property(copy, nonatomic) NSString *proxyServiceIdentifier;
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) double height;
@property(readonly, nonatomic) _Bool hasData;
@property(copy, nonatomic) NSData *data;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

