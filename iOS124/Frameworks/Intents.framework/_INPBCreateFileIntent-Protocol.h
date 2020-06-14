//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBString;

@protocol _INPBCreateFileIntent <NSObject>
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasEntityType;
@property(nonatomic) int entityType;
@property(readonly, nonatomic) _Bool hasEntityName;
@property(retain, nonatomic) _INPBString *entityName;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType;
@property(readonly, nonatomic) _Bool hasDestinationName;
@property(retain, nonatomic) _INPBString *destinationName;
- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
- (int)StringAsDestinationType:(NSString *)arg1;
- (NSString *)destinationTypeAsString:(int)arg1;
@end

