const chai = require('chai')
const expect = chai.expect

function fibonacci(n) {
  return n < 1 ? 0 : n <= 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2)
}

describe('Performance Tests', function() {
  it('via javascript', function() {
    expect(fibonacci(42)).to.equal(267914296)
  }).timeout(0)
})
