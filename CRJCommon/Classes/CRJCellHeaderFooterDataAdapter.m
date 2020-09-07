//
//  CRJCellHeaderFooterDataAdapter.m
//  CRJCommon
//
//  Created by zhuyuhui on 2020/9/7.
//

#import "CRJCellHeaderFooterDataAdapter.h"

@implementation CRJCellHeaderFooterDataAdapter
+ (instancetype)adapterWithReuseIdentifier:(NSString *)reuseIdentifier
                                      data:(id)data
                                    height:(CGFloat)height
                                      type:(NSInteger)type
{
    CRJCellHeaderFooterDataAdapter *adapter = [[self class] new];
    adapter.reuseIdentifier              = reuseIdentifier;
    adapter.data                         = data;
    adapter.height                       = height;
    adapter.type                         = type;
    
    return adapter;
}
@end
