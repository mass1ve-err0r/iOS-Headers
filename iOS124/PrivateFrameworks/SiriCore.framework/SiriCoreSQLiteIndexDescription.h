//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying>
{
    NSString *_name;
    NSString *_tableName;
    NSArray *_columnNames;
    unsigned long long _options;
}

@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSArray *columnNames; // @synthesize columnNames=_columnNames;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 tableName:(id)arg2 columnNames:(id)arg3 options:(unsigned long long)arg4;

@end

