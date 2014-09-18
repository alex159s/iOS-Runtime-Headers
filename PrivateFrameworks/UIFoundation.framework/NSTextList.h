/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying> {
    unsigned long long _listFlags;
    void *_listSecondary;
    NSString *_markerFormat;
    long long _startIndex;
}

+ (id)_standardMarkerAttributesForAttributes:(id)arg1;
+ (void)initialize;

- (bool)_isOrdered;
- (id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2;
- (id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(bool*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7;
- (id)_markerPrefix;
- (id)_markerSpecifier;
- (id)_markerSuffix;
- (id)_markerTitle;
- (id)_unaffixedMarkerForItemNumber:(long long)arg1;
- (id)_unaffixedMarkerFormat;
- (id)_unaffixedMarkerTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)listOptions;
- (id)markerForItemNumber:(long long)arg1;
- (id)markerFormat;
- (unsigned long long)options;
- (void)setStartingItemNumber:(long long)arg1;
- (long long)startingItemNumber;

@end