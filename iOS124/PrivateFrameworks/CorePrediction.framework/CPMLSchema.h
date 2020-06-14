//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString;

__attribute__((visibility("hidden")))
@interface CPMLSchema : NSObject
{
    NSMutableArray *schema;
    NSMutableString *schemaHeader;
    NSMutableString *schemaHeaderWithType;
    NSMutableArray *attribute;
    NSMutableArray *schemaHDef;
    NSMutableArray *nsRemapTable;
    NSMutableArray *_categoricalDataList;
    NSMutableArray *_replaceMissingValue;
    NSMutableArray *_matchReplaceValue;
    int yColumnPosition;
    NSMutableArray *availableOptions;
    NSMutableArray *_indexColumnList;
}

@property(readonly, nonatomic) NSMutableArray *indexColumnList; // @synthesize indexColumnList=_indexColumnList;
@property(readonly, nonatomic) NSMutableArray *availableOptions; // @synthesize availableOptions;
@property(readonly, nonatomic) NSMutableArray *nsRemapTable; // @synthesize nsRemapTable;
@property(readonly, nonatomic) NSMutableString *schemaHeaderWithType; // @synthesize schemaHeaderWithType;
@property(readonly, nonatomic) NSMutableString *schemaHeader; // @synthesize schemaHeader;
@property(readonly, nonatomic) NSMutableArray *attribute; // @synthesize attribute;
- (void).cxx_destruct;
- (id)getSubstituteValue:(unsigned long long)arg1;
- (_Bool)matchSubstituteValue:(unsigned long long)arg1 theValue:(id)arg2;
- (unsigned long long)getUserDefinedCategoricalDataCount:(unsigned long long)arg1;
- (id)getUserDefinedCategoricalData:(unsigned long long)arg1;
- (_Bool)hasOptions:(unsigned long long)arg1;
- (int)getYColumnPosition;
- (int)getVectorContent:(unsigned long long)arg1;
- (int)getSchemaType:(unsigned long long)arg1;
- (id)getColumnName:(unsigned long long)arg1;
- (int)getColumnPosition:(id)arg1;
- (_Bool)isColumnContinous:(unsigned int)arg1;
- (_Bool)isVectorType:(unsigned long long)arg1;
- (_Bool)isStringType:(unsigned long long)arg1;
- (_Bool)isRealType:(unsigned long long)arg1;
- (_Bool)isIntType:(unsigned long long)arg1;
- (_Bool)isNumType:(unsigned long long)arg1;
- (unsigned long long)getTotalAttributes;
- (id)initWithPlist:(id)arg1;
- (id)init:(id)arg1;

@end

