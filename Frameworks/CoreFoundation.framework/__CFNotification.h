/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __CFNotification : NSNotification <NSCopying> {
    BOOL _dyingObject;
    BOOL _fouSemantics;
    id _name;
    id _object;
    id _userInfo;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithName:(struct __CFString { }*)arg1 object:(const void*)arg2 userInfo:(struct __CFDictionary { }*)arg3 foundation:(BOOL)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)object;
- (id)userInfo;

@end
