//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata;

@protocol _INPBGetVisualCodeIntent <NSObject>
@property(nonatomic) _Bool hasVisualCodeType;
@property(nonatomic) int visualCodeType;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
- (int)StringAsVisualCodeType:(NSString *)arg1;
- (NSString *)visualCodeTypeAsString:(int)arg1;
@end

